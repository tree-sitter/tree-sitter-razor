#include "tree_sitter/parser.h"

#define STATE_COUNT 142
#define SYMBOL_COUNT 49

enum {
    sym_document = ts_builtin_sym_start,
    sym__markup,
    sym__code,
    sym_tag,
    sym_interpolated_expression,
    sym_interpolated_if_statement,
    sym_interpolated_while_statement,
    sym_interpolated_code_block,
    sym__expression,
    sym__simple_expression,
    sym__statement,
    sym_variable_declaration,
    sym_type_specifier,
    sym_expression_statement,
    sym_binary_expression,
    sym_call_expression,
    sym_simple_call_expression,
    sym_member_expression,
    sym_simple_member_expression,
    sym_open_tag,
    sym_close_tag,
    aux_sym__markup_repeat1,
    aux_sym__code_repeat1,
    aux_sym_call_expression_repeat1,
    anon_sym_AT,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_ATif,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    anon_sym_ATwhile,
    anon_sym_AT_LBRACE,
    anon_sym_EQ,
    anon_sym_SEMI,
    anon_sym_var,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_COMMA,
    anon_sym_DOT,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_LT_SLASH,
    sym_string,
    sym_identifier,
    sym_number,
    sym__word,
    sym__non_word,
};

static const char *ts_symbol_names[] = {
    [sym_document] = "document",
    [sym__markup] = "_markup",
    [sym__code] = "_code",
    [sym_tag] = "tag",
    [sym_interpolated_expression] = "interpolated_expression",
    [sym_interpolated_if_statement] = "interpolated_if_statement",
    [sym_interpolated_while_statement] = "interpolated_while_statement",
    [sym_interpolated_code_block] = "interpolated_code_block",
    [sym__expression] = "_expression",
    [sym__simple_expression] = "_simple_expression",
    [sym__statement] = "_statement",
    [sym_variable_declaration] = "variable_declaration",
    [sym_type_specifier] = "type_specifier",
    [sym_expression_statement] = "expression_statement",
    [sym_binary_expression] = "binary_expression",
    [sym_call_expression] = "call_expression",
    [sym_simple_call_expression] = "simple_call_expression",
    [sym_member_expression] = "member_expression",
    [sym_simple_member_expression] = "simple_member_expression",
    [sym_open_tag] = "open_tag",
    [sym_close_tag] = "close_tag",
    [aux_sym__markup_repeat1] = "_markup_repeat1",
    [aux_sym__code_repeat1] = "_code_repeat1",
    [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_AT] = "@",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_ATif] = "@if",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_ATwhile] = "@while",
    [anon_sym_AT_LBRACE] = "@{",
    [anon_sym_EQ] = "=",
    [anon_sym_SEMI] = ";",
    [anon_sym_var] = "var",
    [anon_sym_PLUS] = "+",
    [anon_sym_DASH] = "-",
    [anon_sym_COMMA] = ",",
    [anon_sym_DOT] = ".",
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
    [anon_sym_LT_SLASH] = "</",
    [sym_string] = "string",
    [sym_identifier] = "identifier",
    [sym_number] = "number",
    [sym__word] = "_word",
    [sym__non_word] = "_non_word",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [sym_document] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__markup] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__code] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_tag] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interpolated_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interpolated_if_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interpolated_while_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interpolated_code_block] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__simple_expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__statement] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_variable_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_type_specifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_expression_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_binary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_call_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_simple_call_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_member_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_simple_member_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_open_tag] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_close_tag] = {.visible = true, .named = true, .structural = true, .extra = false},
    [aux_sym__markup_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__code_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_call_expression_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = false, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_AT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_ATif] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_ATwhile] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AT_LBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_SEMI] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_var] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DOT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_SLASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [sym_string] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_number] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__word] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__non_word] = {.visible = false, .named = false, .structural = true, .extra = false},
};

static TSTree *ts_lex(TSLexer *lexer, TSStateId state, bool error_mode) {
    START_LEXER();
    switch (state) {
        case 0:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(3);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(11);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '<')
                ADVANCE(14);
            if (lookahead == '=')
                ADVANCE(16);
            if (lookahead == '>')
                ADVANCE(17);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'v')
                ADVANCE(29);
            if (lookahead == '{')
                ADVANCE(32);
            if (lookahead == '}')
                ADVANCE(33);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '\"') ||
                (lookahead == '(') ||
                (lookahead == ')') ||
                ('+' <= lookahead && lookahead <= '.') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (';' <= lookahead && lookahead <= '>') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= '{') ||
                (lookahead == '}')))
                ADVANCE(34);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            START_TOKEN();
            ACCEPT_FRAGILE_TOKEN(sym__non_word);
        case 3:
            if (lookahead == '\"')
                ADVANCE(4);
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(5);
            ACCEPT_FRAGILE_TOKEN(sym__non_word);
        case 4:
            ACCEPT_TOKEN(sym_string);
        case 5:
            if (lookahead == '\"')
                ADVANCE(4);
            if (!((lookahead == 0) ||
                (lookahead == '\"')))
                ADVANCE(5);
            LEX_ERROR();
        case 6:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 7:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 8:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 9:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 10:
            ACCEPT_TOKEN(anon_sym_DASH);
        case 11:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 12:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            ACCEPT_TOKEN(sym_number);
        case 13:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 14:
            if (lookahead == '/')
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_LT);
        case 15:
            ACCEPT_TOKEN(anon_sym_LT_SLASH);
        case 16:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 17:
            ACCEPT_TOKEN(anon_sym_GT);
        case 18:
            if (lookahead == 'i')
                ADVANCE(19);
            if (lookahead == 'w')
                ADVANCE(21);
            if (lookahead == '{')
                ADVANCE(26);
            ACCEPT_TOKEN(anon_sym_AT);
        case 19:
            if (lookahead == 'f')
                ADVANCE(20);
            LEX_ERROR();
        case 20:
            ACCEPT_TOKEN(anon_sym_ATif);
        case 21:
            if (lookahead == 'h')
                ADVANCE(22);
            LEX_ERROR();
        case 22:
            if (lookahead == 'i')
                ADVANCE(23);
            LEX_ERROR();
        case 23:
            if (lookahead == 'l')
                ADVANCE(24);
            LEX_ERROR();
        case 24:
            if (lookahead == 'e')
                ADVANCE(25);
            LEX_ERROR();
        case 25:
            ACCEPT_TOKEN(anon_sym_ATwhile);
        case 26:
            ACCEPT_TOKEN(anon_sym_AT_LBRACE);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(28);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 29:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(28);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'a')
                ADVANCE(30);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 30:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(28);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            if (lookahead == 'r')
                ADVANCE(31);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 31:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(28);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(27);
            ACCEPT_TOKEN(anon_sym_var);
        case 32:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 33:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 34:
            ACCEPT_FRAGILE_TOKEN(sym__non_word);
        case 35:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '<')
                ADVANCE(36);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(34);
            LEX_ERROR();
        case 36:
            ACCEPT_TOKEN(anon_sym_LT);
        case 37:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            ACCEPT_FRAGILE_TOKEN(sym__word);
        case 38:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(38);
            LEX_ERROR();
        case 39:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '<')
                ADVANCE(14);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(34);
            LEX_ERROR();
        case 40:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(40);
            if (lookahead == '(')
                ADVANCE(6);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            LEX_ERROR();
        case 41:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(41);
            if (lookahead == '(')
                ADVANCE(6);
            LEX_ERROR();
        case 42:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(42);
            if (lookahead == '\"')
                ADVANCE(5);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (lookahead == '<')
                ADVANCE(36);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            if (lookahead == 'v')
                ADVANCE(43);
            if (lookahead == '}')
                ADVANCE(33);
            LEX_ERROR();
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            if (lookahead == 'a')
                ADVANCE(44);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            if (lookahead == 'r')
                ADVANCE(45);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            ACCEPT_TOKEN(anon_sym_var);
        case 46:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(46);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            LEX_ERROR();
        case 47:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(47);
            if (lookahead == '>')
                ADVANCE(17);
            LEX_ERROR();
        case 48:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '<')
                ADVANCE(36);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(34);
            LEX_ERROR();
        case 49:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(49);
            if (lookahead == '}')
                ADVANCE(33);
            LEX_ERROR();
        case 50:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(50);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(11);
            if (lookahead == ';')
                ADVANCE(13);
            LEX_ERROR();
        case 51:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(51);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            LEX_ERROR();
        case 52:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(52);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(11);
            if (lookahead == ';')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            LEX_ERROR();
        case 53:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(53);
            if (lookahead == '<')
                ADVANCE(54);
            LEX_ERROR();
        case 54:
            if (lookahead == '/')
                ADVANCE(15);
            LEX_ERROR();
        case 55:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(55);
            if (lookahead == '\"')
                ADVANCE(5);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            LEX_ERROR();
        case 56:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(56);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(11);
            LEX_ERROR();
        case 57:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(57);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            LEX_ERROR();
        case 58:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(58);
            if (lookahead == '{')
                ADVANCE(32);
            LEX_ERROR();
        case 59:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(59);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == ')')
                ADVANCE(7);
            if (lookahead == '+')
                ADVANCE(8);
            if (lookahead == ',')
                ADVANCE(9);
            if (lookahead == '-')
                ADVANCE(10);
            if (lookahead == '.')
                ADVANCE(11);
            LEX_ERROR();
        case 60:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(60);
            if (lookahead == ')')
                ADVANCE(7);
            LEX_ERROR();
        case 61:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(11);
            if (lookahead == '<')
                ADVANCE(14);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '(') ||
                (lookahead == '.') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(34);
            LEX_ERROR();
        case 62:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(62);
            if (lookahead == ';')
                ADVANCE(13);
            if (lookahead == '=')
                ADVANCE(16);
            LEX_ERROR();
        case 63:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(11);
            if (lookahead == '<')
                ADVANCE(36);
            if (lookahead == '@')
                ADVANCE(18);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(37);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '(') ||
                (lookahead == '.') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(34);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 35,
    [1] = 38,
    [2] = 38,
    [3] = 35,
    [4] = 39,
    [5] = 38,
    [6] = 40,
    [7] = 41,
    [8] = 41,
    [9] = 42,
    [10] = 46,
    [11] = 38,
    [12] = 47,
    [13] = 48,
    [14] = 49,
    [15] = 42,
    [16] = 50,
    [17] = 42,
    [18] = 51,
    [19] = 50,
    [20] = 39,
    [21] = 49,
    [22] = 51,
    [23] = 52,
    [24] = 53,
    [25] = 39,
    [26] = 39,
    [27] = 53,
    [28] = 40,
    [29] = 41,
    [30] = 41,
    [31] = 42,
    [32] = 53,
    [33] = 49,
    [34] = 39,
    [35] = 55,
    [36] = 56,
    [37] = 56,
    [38] = 57,
    [39] = 58,
    [40] = 55,
    [41] = 51,
    [42] = 56,
    [43] = 56,
    [44] = 42,
    [45] = 49,
    [46] = 39,
    [47] = 59,
    [48] = 59,
    [49] = 56,
    [50] = 60,
    [51] = 57,
    [52] = 56,
    [53] = 55,
    [54] = 55,
    [55] = 51,
    [56] = 59,
    [57] = 59,
    [58] = 60,
    [59] = 59,
    [60] = 59,
    [61] = 59,
    [62] = 60,
    [63] = 59,
    [64] = 59,
    [65] = 56,
    [66] = 55,
    [67] = 56,
    [68] = 58,
    [69] = 42,
    [70] = 49,
    [71] = 39,
    [72] = 61,
    [73] = 61,
    [74] = 55,
    [75] = 56,
    [76] = 39,
    [77] = 57,
    [78] = 51,
    [79] = 61,
    [80] = 59,
    [81] = 61,
    [82] = 60,
    [83] = 61,
    [84] = 61,
    [85] = 53,
    [86] = 39,
    [87] = 46,
    [88] = 47,
    [89] = 39,
    [90] = 42,
    [91] = 46,
    [92] = 47,
    [93] = 42,
    [94] = 62,
    [95] = 55,
    [96] = 42,
    [97] = 50,
    [98] = 57,
    [99] = 42,
    [100] = 55,
    [101] = 51,
    [102] = 50,
    [103] = 50,
    [104] = 59,
    [105] = 50,
    [106] = 60,
    [107] = 50,
    [108] = 50,
    [109] = 49,
    [110] = 42,
    [111] = 35,
    [112] = 55,
    [113] = 56,
    [114] = 58,
    [115] = 42,
    [116] = 49,
    [117] = 35,
    [118] = 55,
    [119] = 56,
    [120] = 58,
    [121] = 42,
    [122] = 49,
    [123] = 35,
    [124] = 63,
    [125] = 63,
    [126] = 55,
    [127] = 56,
    [128] = 35,
    [129] = 57,
    [130] = 51,
    [131] = 63,
    [132] = 59,
    [133] = 63,
    [134] = 60,
    [135] = 63,
    [136] = 63,
    [137] = 53,
    [138] = 35,
    [139] = 46,
    [140] = 47,
    [141] = 35,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_document] = 2,
        [sym__markup] = 4,
        [sym_tag] = 6,
        [sym_interpolated_expression] = 6,
        [sym_interpolated_if_statement] = 6,
        [sym_interpolated_while_statement] = 6,
        [sym_interpolated_code_block] = 6,
        [sym_open_tag] = 8,
        [aux_sym__markup_repeat1] = 10,
        [ts_builtin_sym_end] = 12,
        [anon_sym_AT] = 14,
        [anon_sym_ATif] = 16,
        [anon_sym_ATwhile] = 18,
        [anon_sym_AT_LBRACE] = 20,
        [anon_sym_LT] = 22,
        [sym__word] = 6,
        [sym__non_word] = 6,
    },
    [1] = {
        [ts_builtin_sym_end] = 24,
    },
    [2] = {
        [ts_builtin_sym_end] = 26,
    },
    [3] = {
        [sym_tag] = 6,
        [sym_interpolated_expression] = 6,
        [sym_interpolated_if_statement] = 6,
        [sym_interpolated_while_statement] = 6,
        [sym_interpolated_code_block] = 6,
        [sym_open_tag] = 8,
        [aux_sym__markup_repeat1] = 28,
        [ts_builtin_sym_end] = 30,
        [anon_sym_AT] = 14,
        [anon_sym_ATif] = 16,
        [anon_sym_ATwhile] = 18,
        [anon_sym_AT_LBRACE] = 20,
        [anon_sym_LT] = 22,
        [sym__word] = 6,
        [sym__non_word] = 6,
    },
    [4] = {
        [sym__markup] = 32,
        [sym_tag] = 34,
        [sym_interpolated_expression] = 34,
        [sym_interpolated_if_statement] = 34,
        [sym_interpolated_while_statement] = 34,
        [sym_interpolated_code_block] = 34,
        [sym_open_tag] = 36,
        [sym_close_tag] = 12,
        [aux_sym__markup_repeat1] = 38,
        [anon_sym_AT] = 40,
        [anon_sym_ATif] = 42,
        [anon_sym_ATwhile] = 44,
        [anon_sym_AT_LBRACE] = 46,
        [anon_sym_LT] = 22,
        [anon_sym_LT_SLASH] = 12,
        [sym__word] = 34,
        [sym__non_word] = 34,
    },
    [5] = {
        [ts_builtin_sym_end] = 48,
    },
    [6] = {
        [sym__simple_expression] = 50,
        [sym_simple_call_expression] = 52,
        [sym_simple_member_expression] = 52,
        [anon_sym_LPAREN] = 54,
        [sym_identifier] = 52,
    },
    [7] = {
        [anon_sym_LPAREN] = 56,
    },
    [8] = {
        [anon_sym_LPAREN] = 58,
    },
    [9] = {
        [sym__code] = 60,
        [sym_tag] = 62,
        [sym__expression] = 64,
        [sym__statement] = 62,
        [sym_variable_declaration] = 66,
        [sym_type_specifier] = 68,
        [sym_expression_statement] = 66,
        [sym_binary_expression] = 70,
        [sym_call_expression] = 70,
        [sym_member_expression] = 70,
        [sym_open_tag] = 72,
        [aux_sym__code_repeat1] = 74,
        [anon_sym_RBRACE] = 76,
        [anon_sym_var] = 78,
        [anon_sym_LT] = 22,
        [sym_string] = 70,
        [sym_identifier] = 80,
        [sym_number] = 70,
    },
    [10] = {
        [sym__word] = 82,
    },
    [11] = {
        [ts_builtin_sym_end] = 84,
    },
    [12] = {
        [anon_sym_GT] = 86,
    },
    [13] = {
        [sym__markup] = 88,
        [sym_tag] = 88,
        [sym_interpolated_expression] = 88,
        [sym_interpolated_if_statement] = 88,
        [sym_interpolated_while_statement] = 88,
        [sym_interpolated_code_block] = 88,
        [sym_open_tag] = 88,
        [aux_sym__markup_repeat1] = 88,
        [anon_sym_AT] = 88,
        [anon_sym_ATif] = 88,
        [anon_sym_ATwhile] = 88,
        [anon_sym_AT_LBRACE] = 88,
        [anon_sym_LT] = 88,
        [sym__word] = 88,
        [sym__non_word] = 88,
    },
    [14] = {
        [anon_sym_RBRACE] = 90,
    },
    [15] = {
        [sym_tag] = 62,
        [sym__expression] = 64,
        [sym__statement] = 62,
        [sym_variable_declaration] = 66,
        [sym_type_specifier] = 68,
        [sym_expression_statement] = 66,
        [sym_binary_expression] = 70,
        [sym_call_expression] = 70,
        [sym_member_expression] = 70,
        [sym_open_tag] = 72,
        [aux_sym__code_repeat1] = 92,
        [anon_sym_RBRACE] = 94,
        [anon_sym_var] = 78,
        [anon_sym_LT] = 22,
        [sym_string] = 70,
        [sym_identifier] = 80,
        [sym_number] = 70,
    },
    [16] = {
        [anon_sym_LPAREN] = 96,
        [anon_sym_SEMI] = 98,
        [anon_sym_PLUS] = 100,
        [anon_sym_DASH] = 100,
        [anon_sym_DOT] = 102,
    },
    [17] = {
        [sym_tag] = 104,
        [sym__expression] = 104,
        [sym__statement] = 104,
        [sym_variable_declaration] = 104,
        [sym_type_specifier] = 104,
        [sym_expression_statement] = 104,
        [sym_binary_expression] = 104,
        [sym_call_expression] = 104,
        [sym_member_expression] = 104,
        [sym_open_tag] = 104,
        [aux_sym__code_repeat1] = 104,
        [anon_sym_RBRACE] = 104,
        [anon_sym_var] = 104,
        [anon_sym_LT] = 104,
        [sym_string] = 104,
        [sym_identifier] = 104,
        [sym_number] = 104,
    },
    [18] = {
        [sym_identifier] = 106,
    },
    [19] = {
        [anon_sym_LPAREN] = 108,
        [anon_sym_SEMI] = 108,
        [anon_sym_PLUS] = 108,
        [anon_sym_DASH] = 108,
        [anon_sym_DOT] = 108,
    },
    [20] = {
        [sym__markup] = 110,
        [sym_tag] = 34,
        [sym_interpolated_expression] = 34,
        [sym_interpolated_if_statement] = 34,
        [sym_interpolated_while_statement] = 34,
        [sym_interpolated_code_block] = 34,
        [sym_open_tag] = 36,
        [sym_close_tag] = 12,
        [aux_sym__markup_repeat1] = 38,
        [anon_sym_AT] = 40,
        [anon_sym_ATif] = 42,
        [anon_sym_ATwhile] = 44,
        [anon_sym_AT_LBRACE] = 46,
        [anon_sym_LT] = 22,
        [anon_sym_LT_SLASH] = 12,
        [sym__word] = 34,
        [sym__non_word] = 34,
    },
    [21] = {
        [anon_sym_RBRACE] = 112,
    },
    [22] = {
        [sym_identifier] = 114,
    },
    [23] = {
        [anon_sym_LPAREN] = 108,
        [anon_sym_SEMI] = 108,
        [anon_sym_PLUS] = 108,
        [anon_sym_DASH] = 108,
        [anon_sym_DOT] = 108,
        [sym_identifier] = 114,
    },
    [24] = {
        [sym_close_tag] = 116,
        [anon_sym_LT_SLASH] = 118,
    },
    [25] = {
        [sym_tag] = 34,
        [sym_interpolated_expression] = 34,
        [sym_interpolated_if_statement] = 34,
        [sym_interpolated_while_statement] = 34,
        [sym_interpolated_code_block] = 34,
        [sym_open_tag] = 36,
        [sym_close_tag] = 30,
        [aux_sym__markup_repeat1] = 120,
        [anon_sym_AT] = 40,
        [anon_sym_ATif] = 42,
        [anon_sym_ATwhile] = 44,
        [anon_sym_AT_LBRACE] = 46,
        [anon_sym_LT] = 22,
        [anon_sym_LT_SLASH] = 30,
        [sym__word] = 34,
        [sym__non_word] = 34,
    },
    [26] = {
        [sym__markup] = 122,
        [sym_tag] = 34,
        [sym_interpolated_expression] = 34,
        [sym_interpolated_if_statement] = 34,
        [sym_interpolated_while_statement] = 34,
        [sym_interpolated_code_block] = 34,
        [sym_open_tag] = 36,
        [sym_close_tag] = 12,
        [aux_sym__markup_repeat1] = 38,
        [anon_sym_AT] = 40,
        [anon_sym_ATif] = 42,
        [anon_sym_ATwhile] = 44,
        [anon_sym_AT_LBRACE] = 46,
        [anon_sym_LT] = 22,
        [anon_sym_LT_SLASH] = 12,
        [sym__word] = 34,
        [sym__non_word] = 34,
    },
    [27] = {
        [sym_close_tag] = 48,
        [anon_sym_LT_SLASH] = 48,
    },
    [28] = {
        [sym__simple_expression] = 124,
        [sym_simple_call_expression] = 126,
        [sym_simple_member_expression] = 126,
        [anon_sym_LPAREN] = 128,
        [sym_identifier] = 126,
    },
    [29] = {
        [anon_sym_LPAREN] = 130,
    },
    [30] = {
        [anon_sym_LPAREN] = 132,
    },
    [31] = {
        [sym__code] = 134,
        [sym_tag] = 62,
        [sym__expression] = 64,
        [sym__statement] = 62,
        [sym_variable_declaration] = 66,
        [sym_type_specifier] = 68,
        [sym_expression_statement] = 66,
        [sym_binary_expression] = 70,
        [sym_call_expression] = 70,
        [sym_member_expression] = 70,
        [sym_open_tag] = 72,
        [aux_sym__code_repeat1] = 74,
        [anon_sym_RBRACE] = 76,
        [anon_sym_var] = 78,
        [anon_sym_LT] = 22,
        [sym_string] = 70,
        [sym_identifier] = 80,
        [sym_number] = 70,
    },
    [32] = {
        [sym_close_tag] = 84,
        [anon_sym_LT_SLASH] = 84,
    },
    [33] = {
        [anon_sym_RBRACE] = 136,
    },
    [34] = {
        [sym_tag] = 138,
        [sym_interpolated_expression] = 138,
        [sym_interpolated_if_statement] = 138,
        [sym_interpolated_while_statement] = 138,
        [sym_interpolated_code_block] = 138,
        [sym_open_tag] = 138,
        [sym_close_tag] = 138,
        [aux_sym__markup_repeat1] = 138,
        [anon_sym_AT] = 138,
        [anon_sym_ATif] = 138,
        [anon_sym_ATwhile] = 138,
        [anon_sym_AT_LBRACE] = 138,
        [anon_sym_LT] = 138,
        [anon_sym_LT_SLASH] = 138,
        [sym__word] = 138,
        [sym__non_word] = 138,
    },
    [35] = {
        [sym__expression] = 140,
        [sym_binary_expression] = 142,
        [sym_call_expression] = 142,
        [sym_member_expression] = 142,
        [sym_string] = 142,
        [sym_identifier] = 142,
        [sym_number] = 142,
    },
    [36] = {
        [anon_sym_LPAREN] = 144,
        [anon_sym_RPAREN] = 146,
        [anon_sym_PLUS] = 148,
        [anon_sym_DASH] = 148,
        [anon_sym_DOT] = 150,
    },
    [37] = {
        [anon_sym_LPAREN] = 108,
        [anon_sym_RPAREN] = 108,
        [anon_sym_PLUS] = 108,
        [anon_sym_DASH] = 108,
        [anon_sym_DOT] = 108,
    },
    [38] = {
        [sym__expression] = 152,
        [sym_binary_expression] = 154,
        [sym_call_expression] = 154,
        [sym_member_expression] = 154,
        [anon_sym_RPAREN] = 156,
        [sym_string] = 154,
        [sym_identifier] = 154,
        [sym_number] = 154,
    },
    [39] = {
        [anon_sym_LBRACE] = 158,
    },
    [40] = {
        [sym__expression] = 160,
        [sym_binary_expression] = 142,
        [sym_call_expression] = 142,
        [sym_member_expression] = 142,
        [sym_string] = 142,
        [sym_identifier] = 142,
        [sym_number] = 142,
    },
    [41] = {
        [sym_identifier] = 162,
    },
    [42] = {
        [anon_sym_LPAREN] = 164,
        [anon_sym_RPAREN] = 164,
        [anon_sym_PLUS] = 164,
        [anon_sym_DASH] = 164,
        [anon_sym_DOT] = 164,
    },
    [43] = {
        [anon_sym_LPAREN] = 166,
        [anon_sym_RPAREN] = 166,
        [anon_sym_PLUS] = 166,
        [anon_sym_DASH] = 166,
        [anon_sym_DOT] = 166,
    },
    [44] = {
        [sym__code] = 168,
        [sym_tag] = 62,
        [sym__expression] = 64,
        [sym__statement] = 62,
        [sym_variable_declaration] = 66,
        [sym_type_specifier] = 68,
        [sym_expression_statement] = 66,
        [sym_binary_expression] = 70,
        [sym_call_expression] = 70,
        [sym_member_expression] = 70,
        [sym_open_tag] = 72,
        [aux_sym__code_repeat1] = 74,
        [anon_sym_RBRACE] = 76,
        [anon_sym_var] = 78,
        [anon_sym_LT] = 22,
        [sym_string] = 70,
        [sym_identifier] = 80,
        [sym_number] = 70,
    },
    [45] = {
        [anon_sym_RBRACE] = 170,
    },
    [46] = {
        [sym_tag] = 172,
        [sym_interpolated_expression] = 172,
        [sym_interpolated_if_statement] = 172,
        [sym_interpolated_while_statement] = 172,
        [sym_interpolated_code_block] = 172,
        [sym_open_tag] = 172,
        [sym_close_tag] = 172,
        [aux_sym__markup_repeat1] = 172,
        [anon_sym_AT] = 172,
        [anon_sym_ATif] = 172,
        [anon_sym_ATwhile] = 172,
        [anon_sym_AT_LBRACE] = 172,
        [anon_sym_LT] = 172,
        [anon_sym_LT_SLASH] = 172,
        [sym__word] = 172,
        [sym__non_word] = 172,
    },
    [47] = {
        [aux_sym_call_expression_repeat1] = 174,
        [anon_sym_LPAREN] = 176,
        [anon_sym_RPAREN] = 178,
        [anon_sym_PLUS] = 180,
        [anon_sym_DASH] = 180,
        [anon_sym_COMMA] = 182,
        [anon_sym_DOT] = 184,
    },
    [48] = {
        [aux_sym_call_expression_repeat1] = 108,
        [anon_sym_LPAREN] = 108,
        [anon_sym_RPAREN] = 108,
        [anon_sym_PLUS] = 108,
        [anon_sym_DASH] = 108,
        [anon_sym_COMMA] = 108,
        [anon_sym_DOT] = 108,
    },
    [49] = {
        [anon_sym_LPAREN] = 186,
        [anon_sym_RPAREN] = 186,
        [anon_sym_PLUS] = 186,
        [anon_sym_DASH] = 186,
        [anon_sym_DOT] = 186,
    },
    [50] = {
        [anon_sym_RPAREN] = 188,
    },
    [51] = {
        [sym__expression] = 190,
        [sym_binary_expression] = 154,
        [sym_call_expression] = 154,
        [sym_member_expression] = 154,
        [anon_sym_RPAREN] = 192,
        [sym_string] = 154,
        [sym_identifier] = 154,
        [sym_number] = 154,
    },
    [52] = {
        [anon_sym_LPAREN] = 194,
        [anon_sym_RPAREN] = 194,
        [anon_sym_PLUS] = 194,
        [anon_sym_DASH] = 194,
        [anon_sym_DOT] = 194,
    },
    [53] = {
        [sym__expression] = 196,
        [sym_binary_expression] = 154,
        [sym_call_expression] = 154,
        [sym_member_expression] = 154,
        [sym_string] = 154,
        [sym_identifier] = 154,
        [sym_number] = 154,
    },
    [54] = {
        [sym__expression] = 198,
        [sym_binary_expression] = 154,
        [sym_call_expression] = 154,
        [sym_member_expression] = 154,
        [sym_string] = 154,
        [sym_identifier] = 154,
        [sym_number] = 154,
    },
    [55] = {
        [sym_identifier] = 200,
    },
    [56] = {
        [aux_sym_call_expression_repeat1] = 164,
        [anon_sym_LPAREN] = 164,
        [anon_sym_RPAREN] = 164,
        [anon_sym_PLUS] = 164,
        [anon_sym_DASH] = 164,
        [anon_sym_COMMA] = 164,
        [anon_sym_DOT] = 164,
    },
    [57] = {
        [aux_sym_call_expression_repeat1] = 202,
        [anon_sym_LPAREN] = 176,
        [anon_sym_RPAREN] = 204,
        [anon_sym_PLUS] = 180,
        [anon_sym_DASH] = 180,
        [anon_sym_COMMA] = 182,
        [anon_sym_DOT] = 184,
    },
    [58] = {
        [anon_sym_RPAREN] = 206,
    },
    [59] = {
        [aux_sym_call_expression_repeat1] = 166,
        [anon_sym_LPAREN] = 166,
        [anon_sym_RPAREN] = 166,
        [anon_sym_PLUS] = 166,
        [anon_sym_DASH] = 166,
        [anon_sym_COMMA] = 166,
        [anon_sym_DOT] = 166,
    },
    [60] = {
        [aux_sym_call_expression_repeat1] = 208,
        [anon_sym_LPAREN] = 176,
        [anon_sym_RPAREN] = 210,
        [anon_sym_PLUS] = 180,
        [anon_sym_DASH] = 180,
        [anon_sym_COMMA] = 182,
        [anon_sym_DOT] = 184,
    },
    [61] = {
        [aux_sym_call_expression_repeat1] = 186,
        [anon_sym_LPAREN] = 186,
        [anon_sym_RPAREN] = 186,
        [anon_sym_PLUS] = 186,
        [anon_sym_DASH] = 186,
        [anon_sym_COMMA] = 186,
        [anon_sym_DOT] = 186,
    },
    [62] = {
        [anon_sym_RPAREN] = 212,
    },
    [63] = {
        [aux_sym_call_expression_repeat1] = 194,
        [anon_sym_LPAREN] = 194,
        [anon_sym_RPAREN] = 194,
        [anon_sym_PLUS] = 194,
        [anon_sym_DASH] = 194,
        [anon_sym_COMMA] = 194,
        [anon_sym_DOT] = 194,
    },
    [64] = {
        [aux_sym_call_expression_repeat1] = 214,
        [anon_sym_LPAREN] = 214,
        [anon_sym_RPAREN] = 214,
        [anon_sym_PLUS] = 214,
        [anon_sym_DASH] = 214,
        [anon_sym_COMMA] = 214,
        [anon_sym_DOT] = 214,
    },
    [65] = {
        [anon_sym_LPAREN] = 214,
        [anon_sym_RPAREN] = 214,
        [anon_sym_PLUS] = 214,
        [anon_sym_DASH] = 214,
        [anon_sym_DOT] = 214,
    },
    [66] = {
        [sym__expression] = 216,
        [sym_binary_expression] = 142,
        [sym_call_expression] = 142,
        [sym_member_expression] = 142,
        [sym_string] = 142,
        [sym_identifier] = 142,
        [sym_number] = 142,
    },
    [67] = {
        [anon_sym_LPAREN] = 144,
        [anon_sym_RPAREN] = 218,
        [anon_sym_PLUS] = 148,
        [anon_sym_DASH] = 148,
        [anon_sym_DOT] = 150,
    },
    [68] = {
        [anon_sym_LBRACE] = 220,
    },
    [69] = {
        [sym__code] = 222,
        [sym_tag] = 62,
        [sym__expression] = 64,
        [sym__statement] = 62,
        [sym_variable_declaration] = 66,
        [sym_type_specifier] = 68,
        [sym_expression_statement] = 66,
        [sym_binary_expression] = 70,
        [sym_call_expression] = 70,
        [sym_member_expression] = 70,
        [sym_open_tag] = 72,
        [aux_sym__code_repeat1] = 74,
        [anon_sym_RBRACE] = 76,
        [anon_sym_var] = 78,
        [anon_sym_LT] = 22,
        [sym_string] = 70,
        [sym_identifier] = 80,
        [sym_number] = 70,
    },
    [70] = {
        [anon_sym_RBRACE] = 224,
    },
    [71] = {
        [sym_tag] = 226,
        [sym_interpolated_expression] = 226,
        [sym_interpolated_if_statement] = 226,
        [sym_interpolated_while_statement] = 226,
        [sym_interpolated_code_block] = 226,
        [sym_open_tag] = 226,
        [sym_close_tag] = 226,
        [aux_sym__markup_repeat1] = 226,
        [anon_sym_AT] = 226,
        [anon_sym_ATif] = 226,
        [anon_sym_ATwhile] = 226,
        [anon_sym_AT_LBRACE] = 226,
        [anon_sym_LT] = 226,
        [anon_sym_LT_SLASH] = 226,
        [sym__word] = 226,
        [sym__non_word] = 226,
    },
    [72] = {
        [sym_tag] = 228,
        [sym_interpolated_expression] = 228,
        [sym_interpolated_if_statement] = 228,
        [sym_interpolated_while_statement] = 228,
        [sym_interpolated_code_block] = 228,
        [sym_open_tag] = 228,
        [sym_close_tag] = 228,
        [aux_sym__markup_repeat1] = 228,
        [anon_sym_AT] = 228,
        [anon_sym_LPAREN] = 230,
        [anon_sym_ATif] = 228,
        [anon_sym_ATwhile] = 228,
        [anon_sym_AT_LBRACE] = 228,
        [anon_sym_DOT] = 232,
        [anon_sym_LT] = 228,
        [anon_sym_LT_SLASH] = 228,
        [sym__word] = 228,
        [sym__non_word] = 228,
    },
    [73] = {
        [sym_tag] = 234,
        [sym_interpolated_expression] = 234,
        [sym_interpolated_if_statement] = 234,
        [sym_interpolated_while_statement] = 234,
        [sym_interpolated_code_block] = 234,
        [sym_open_tag] = 234,
        [sym_close_tag] = 234,
        [aux_sym__markup_repeat1] = 234,
        [anon_sym_AT] = 234,
        [anon_sym_LPAREN] = 234,
        [anon_sym_ATif] = 234,
        [anon_sym_ATwhile] = 234,
        [anon_sym_AT_LBRACE] = 234,
        [anon_sym_DOT] = 234,
        [anon_sym_LT] = 234,
        [anon_sym_LT_SLASH] = 234,
        [sym__word] = 234,
        [sym__non_word] = 234,
    },
    [74] = {
        [sym__expression] = 236,
        [sym_binary_expression] = 142,
        [sym_call_expression] = 142,
        [sym_member_expression] = 142,
        [sym_string] = 142,
        [sym_identifier] = 142,
        [sym_number] = 142,
    },
    [75] = {
        [anon_sym_LPAREN] = 144,
        [anon_sym_RPAREN] = 238,
        [anon_sym_PLUS] = 148,
        [anon_sym_DASH] = 148,
        [anon_sym_DOT] = 150,
    },
    [76] = {
        [sym_tag] = 240,
        [sym_interpolated_expression] = 240,
        [sym_interpolated_if_statement] = 240,
        [sym_interpolated_while_statement] = 240,
        [sym_interpolated_code_block] = 240,
        [sym_open_tag] = 240,
        [sym_close_tag] = 240,
        [aux_sym__markup_repeat1] = 240,
        [anon_sym_AT] = 240,
        [anon_sym_ATif] = 240,
        [anon_sym_ATwhile] = 240,
        [anon_sym_AT_LBRACE] = 240,
        [anon_sym_LT] = 240,
        [anon_sym_LT_SLASH] = 240,
        [sym__word] = 240,
        [sym__non_word] = 240,
    },
    [77] = {
        [sym__expression] = 242,
        [sym_binary_expression] = 154,
        [sym_call_expression] = 154,
        [sym_member_expression] = 154,
        [anon_sym_RPAREN] = 244,
        [sym_string] = 154,
        [sym_identifier] = 154,
        [sym_number] = 154,
    },
    [78] = {
        [sym_identifier] = 246,
    },
    [79] = {
        [sym_tag] = 248,
        [sym_interpolated_expression] = 248,
        [sym_interpolated_if_statement] = 248,
        [sym_interpolated_while_statement] = 248,
        [sym_interpolated_code_block] = 248,
        [sym_open_tag] = 248,
        [sym_close_tag] = 248,
        [aux_sym__markup_repeat1] = 248,
        [anon_sym_AT] = 248,
        [anon_sym_LPAREN] = 248,
        [anon_sym_ATif] = 248,
        [anon_sym_ATwhile] = 248,
        [anon_sym_AT_LBRACE] = 248,
        [anon_sym_DOT] = 248,
        [anon_sym_LT] = 248,
        [anon_sym_LT_SLASH] = 248,
        [sym__word] = 248,
        [sym__non_word] = 248,
    },
    [80] = {
        [aux_sym_call_expression_repeat1] = 250,
        [anon_sym_LPAREN] = 176,
        [anon_sym_RPAREN] = 252,
        [anon_sym_PLUS] = 180,
        [anon_sym_DASH] = 180,
        [anon_sym_COMMA] = 182,
        [anon_sym_DOT] = 184,
    },
    [81] = {
        [sym_tag] = 254,
        [sym_interpolated_expression] = 254,
        [sym_interpolated_if_statement] = 254,
        [sym_interpolated_while_statement] = 254,
        [sym_interpolated_code_block] = 254,
        [sym_open_tag] = 254,
        [sym_close_tag] = 254,
        [aux_sym__markup_repeat1] = 254,
        [anon_sym_AT] = 254,
        [anon_sym_LPAREN] = 254,
        [anon_sym_ATif] = 254,
        [anon_sym_ATwhile] = 254,
        [anon_sym_AT_LBRACE] = 254,
        [anon_sym_DOT] = 254,
        [anon_sym_LT] = 254,
        [anon_sym_LT_SLASH] = 254,
        [sym__word] = 254,
        [sym__non_word] = 254,
    },
    [82] = {
        [anon_sym_RPAREN] = 256,
    },
    [83] = {
        [sym_tag] = 258,
        [sym_interpolated_expression] = 258,
        [sym_interpolated_if_statement] = 258,
        [sym_interpolated_while_statement] = 258,
        [sym_interpolated_code_block] = 258,
        [sym_open_tag] = 258,
        [sym_close_tag] = 258,
        [aux_sym__markup_repeat1] = 258,
        [anon_sym_AT] = 258,
        [anon_sym_LPAREN] = 258,
        [anon_sym_ATif] = 258,
        [anon_sym_ATwhile] = 258,
        [anon_sym_AT_LBRACE] = 258,
        [anon_sym_DOT] = 258,
        [anon_sym_LT] = 258,
        [anon_sym_LT_SLASH] = 258,
        [sym__word] = 258,
        [sym__non_word] = 258,
    },
    [84] = {
        [sym_tag] = 260,
        [sym_interpolated_expression] = 260,
        [sym_interpolated_if_statement] = 260,
        [sym_interpolated_while_statement] = 260,
        [sym_interpolated_code_block] = 260,
        [sym_open_tag] = 260,
        [sym_close_tag] = 260,
        [aux_sym__markup_repeat1] = 260,
        [anon_sym_AT] = 260,
        [anon_sym_LPAREN] = 260,
        [anon_sym_ATif] = 260,
        [anon_sym_ATwhile] = 260,
        [anon_sym_AT_LBRACE] = 260,
        [anon_sym_DOT] = 260,
        [anon_sym_LT] = 260,
        [anon_sym_LT_SLASH] = 260,
        [sym__word] = 260,
        [sym__non_word] = 260,
    },
    [85] = {
        [sym_close_tag] = 262,
        [anon_sym_LT_SLASH] = 264,
    },
    [86] = {
        [sym_tag] = 266,
        [sym_interpolated_expression] = 266,
        [sym_interpolated_if_statement] = 266,
        [sym_interpolated_while_statement] = 266,
        [sym_interpolated_code_block] = 266,
        [sym_open_tag] = 266,
        [sym_close_tag] = 266,
        [aux_sym__markup_repeat1] = 266,
        [anon_sym_AT] = 266,
        [anon_sym_ATif] = 266,
        [anon_sym_ATwhile] = 266,
        [anon_sym_AT_LBRACE] = 266,
        [anon_sym_LT] = 266,
        [anon_sym_LT_SLASH] = 266,
        [sym__word] = 266,
        [sym__non_word] = 266,
    },
    [87] = {
        [sym__word] = 268,
    },
    [88] = {
        [anon_sym_GT] = 270,
    },
    [89] = {
        [sym_tag] = 272,
        [sym_interpolated_expression] = 272,
        [sym_interpolated_if_statement] = 272,
        [sym_interpolated_while_statement] = 272,
        [sym_interpolated_code_block] = 272,
        [sym_open_tag] = 272,
        [sym_close_tag] = 272,
        [aux_sym__markup_repeat1] = 272,
        [anon_sym_AT] = 272,
        [anon_sym_ATif] = 272,
        [anon_sym_ATwhile] = 272,
        [anon_sym_AT_LBRACE] = 272,
        [anon_sym_LT] = 272,
        [anon_sym_LT_SLASH] = 272,
        [sym__word] = 272,
        [sym__non_word] = 272,
    },
    [90] = {
        [sym_tag] = 266,
        [sym__expression] = 266,
        [sym__statement] = 266,
        [sym_variable_declaration] = 266,
        [sym_type_specifier] = 266,
        [sym_expression_statement] = 266,
        [sym_binary_expression] = 266,
        [sym_call_expression] = 266,
        [sym_member_expression] = 266,
        [sym_open_tag] = 266,
        [aux_sym__code_repeat1] = 266,
        [anon_sym_RBRACE] = 266,
        [anon_sym_var] = 266,
        [anon_sym_LT] = 266,
        [sym_string] = 266,
        [sym_identifier] = 266,
        [sym_number] = 266,
    },
    [91] = {
        [sym__word] = 274,
    },
    [92] = {
        [anon_sym_GT] = 276,
    },
    [93] = {
        [sym_tag] = 272,
        [sym__expression] = 272,
        [sym__statement] = 272,
        [sym_variable_declaration] = 272,
        [sym_type_specifier] = 272,
        [sym_expression_statement] = 272,
        [sym_binary_expression] = 272,
        [sym_call_expression] = 272,
        [sym_member_expression] = 272,
        [sym_open_tag] = 272,
        [aux_sym__code_repeat1] = 272,
        [anon_sym_RBRACE] = 272,
        [anon_sym_var] = 272,
        [anon_sym_LT] = 272,
        [sym_string] = 272,
        [sym_identifier] = 272,
        [sym_number] = 272,
    },
    [94] = {
        [anon_sym_EQ] = 278,
        [anon_sym_SEMI] = 280,
    },
    [95] = {
        [sym__expression] = 282,
        [sym_binary_expression] = 70,
        [sym_call_expression] = 70,
        [sym_member_expression] = 70,
        [sym_string] = 70,
        [sym_identifier] = 70,
        [sym_number] = 70,
    },
    [96] = {
        [sym_tag] = 284,
        [sym__expression] = 284,
        [sym__statement] = 284,
        [sym_variable_declaration] = 284,
        [sym_type_specifier] = 284,
        [sym_expression_statement] = 284,
        [sym_binary_expression] = 284,
        [sym_call_expression] = 284,
        [sym_member_expression] = 284,
        [sym_open_tag] = 284,
        [aux_sym__code_repeat1] = 284,
        [anon_sym_RBRACE] = 284,
        [anon_sym_var] = 284,
        [anon_sym_LT] = 284,
        [sym_string] = 284,
        [sym_identifier] = 284,
        [sym_number] = 284,
    },
    [97] = {
        [anon_sym_LPAREN] = 96,
        [anon_sym_SEMI] = 286,
        [anon_sym_PLUS] = 100,
        [anon_sym_DASH] = 100,
        [anon_sym_DOT] = 102,
    },
    [98] = {
        [sym__expression] = 288,
        [sym_binary_expression] = 154,
        [sym_call_expression] = 154,
        [sym_member_expression] = 154,
        [anon_sym_RPAREN] = 290,
        [sym_string] = 154,
        [sym_identifier] = 154,
        [sym_number] = 154,
    },
    [99] = {
        [sym_tag] = 292,
        [sym__expression] = 292,
        [sym__statement] = 292,
        [sym_variable_declaration] = 292,
        [sym_type_specifier] = 292,
        [sym_expression_statement] = 292,
        [sym_binary_expression] = 292,
        [sym_call_expression] = 292,
        [sym_member_expression] = 292,
        [sym_open_tag] = 292,
        [aux_sym__code_repeat1] = 292,
        [anon_sym_RBRACE] = 292,
        [anon_sym_var] = 292,
        [anon_sym_LT] = 292,
        [sym_string] = 292,
        [sym_identifier] = 292,
        [sym_number] = 292,
    },
    [100] = {
        [sym__expression] = 294,
        [sym_binary_expression] = 70,
        [sym_call_expression] = 70,
        [sym_member_expression] = 70,
        [sym_string] = 70,
        [sym_identifier] = 70,
        [sym_number] = 70,
    },
    [101] = {
        [sym_identifier] = 296,
    },
    [102] = {
        [anon_sym_LPAREN] = 164,
        [anon_sym_SEMI] = 164,
        [anon_sym_PLUS] = 164,
        [anon_sym_DASH] = 164,
        [anon_sym_DOT] = 164,
    },
    [103] = {
        [anon_sym_LPAREN] = 166,
        [anon_sym_SEMI] = 166,
        [anon_sym_PLUS] = 166,
        [anon_sym_DASH] = 166,
        [anon_sym_DOT] = 166,
    },
    [104] = {
        [aux_sym_call_expression_repeat1] = 298,
        [anon_sym_LPAREN] = 176,
        [anon_sym_RPAREN] = 300,
        [anon_sym_PLUS] = 180,
        [anon_sym_DASH] = 180,
        [anon_sym_COMMA] = 182,
        [anon_sym_DOT] = 184,
    },
    [105] = {
        [anon_sym_LPAREN] = 186,
        [anon_sym_SEMI] = 186,
        [anon_sym_PLUS] = 186,
        [anon_sym_DASH] = 186,
        [anon_sym_DOT] = 186,
    },
    [106] = {
        [anon_sym_RPAREN] = 302,
    },
    [107] = {
        [anon_sym_LPAREN] = 194,
        [anon_sym_SEMI] = 194,
        [anon_sym_PLUS] = 194,
        [anon_sym_DASH] = 194,
        [anon_sym_DOT] = 194,
    },
    [108] = {
        [anon_sym_LPAREN] = 214,
        [anon_sym_SEMI] = 214,
        [anon_sym_PLUS] = 214,
        [anon_sym_DASH] = 214,
        [anon_sym_DOT] = 214,
    },
    [109] = {
        [anon_sym_RBRACE] = 304,
    },
    [110] = {
        [sym_tag] = 306,
        [sym__expression] = 306,
        [sym__statement] = 306,
        [sym_variable_declaration] = 306,
        [sym_type_specifier] = 306,
        [sym_expression_statement] = 306,
        [sym_binary_expression] = 306,
        [sym_call_expression] = 306,
        [sym_member_expression] = 306,
        [sym_open_tag] = 306,
        [aux_sym__code_repeat1] = 306,
        [anon_sym_RBRACE] = 306,
        [anon_sym_var] = 306,
        [anon_sym_LT] = 306,
        [sym_string] = 306,
        [sym_identifier] = 306,
        [sym_number] = 306,
    },
    [111] = {
        [sym_tag] = 138,
        [sym_interpolated_expression] = 138,
        [sym_interpolated_if_statement] = 138,
        [sym_interpolated_while_statement] = 138,
        [sym_interpolated_code_block] = 138,
        [sym_open_tag] = 138,
        [aux_sym__markup_repeat1] = 138,
        [ts_builtin_sym_end] = 138,
        [anon_sym_AT] = 138,
        [anon_sym_ATif] = 138,
        [anon_sym_ATwhile] = 138,
        [anon_sym_AT_LBRACE] = 138,
        [anon_sym_LT] = 138,
        [sym__word] = 138,
        [sym__non_word] = 138,
    },
    [112] = {
        [sym__expression] = 308,
        [sym_binary_expression] = 142,
        [sym_call_expression] = 142,
        [sym_member_expression] = 142,
        [sym_string] = 142,
        [sym_identifier] = 142,
        [sym_number] = 142,
    },
    [113] = {
        [anon_sym_LPAREN] = 144,
        [anon_sym_RPAREN] = 310,
        [anon_sym_PLUS] = 148,
        [anon_sym_DASH] = 148,
        [anon_sym_DOT] = 150,
    },
    [114] = {
        [anon_sym_LBRACE] = 312,
    },
    [115] = {
        [sym__code] = 314,
        [sym_tag] = 62,
        [sym__expression] = 64,
        [sym__statement] = 62,
        [sym_variable_declaration] = 66,
        [sym_type_specifier] = 68,
        [sym_expression_statement] = 66,
        [sym_binary_expression] = 70,
        [sym_call_expression] = 70,
        [sym_member_expression] = 70,
        [sym_open_tag] = 72,
        [aux_sym__code_repeat1] = 74,
        [anon_sym_RBRACE] = 76,
        [anon_sym_var] = 78,
        [anon_sym_LT] = 22,
        [sym_string] = 70,
        [sym_identifier] = 80,
        [sym_number] = 70,
    },
    [116] = {
        [anon_sym_RBRACE] = 316,
    },
    [117] = {
        [sym_tag] = 172,
        [sym_interpolated_expression] = 172,
        [sym_interpolated_if_statement] = 172,
        [sym_interpolated_while_statement] = 172,
        [sym_interpolated_code_block] = 172,
        [sym_open_tag] = 172,
        [aux_sym__markup_repeat1] = 172,
        [ts_builtin_sym_end] = 172,
        [anon_sym_AT] = 172,
        [anon_sym_ATif] = 172,
        [anon_sym_ATwhile] = 172,
        [anon_sym_AT_LBRACE] = 172,
        [anon_sym_LT] = 172,
        [sym__word] = 172,
        [sym__non_word] = 172,
    },
    [118] = {
        [sym__expression] = 318,
        [sym_binary_expression] = 142,
        [sym_call_expression] = 142,
        [sym_member_expression] = 142,
        [sym_string] = 142,
        [sym_identifier] = 142,
        [sym_number] = 142,
    },
    [119] = {
        [anon_sym_LPAREN] = 144,
        [anon_sym_RPAREN] = 320,
        [anon_sym_PLUS] = 148,
        [anon_sym_DASH] = 148,
        [anon_sym_DOT] = 150,
    },
    [120] = {
        [anon_sym_LBRACE] = 322,
    },
    [121] = {
        [sym__code] = 324,
        [sym_tag] = 62,
        [sym__expression] = 64,
        [sym__statement] = 62,
        [sym_variable_declaration] = 66,
        [sym_type_specifier] = 68,
        [sym_expression_statement] = 66,
        [sym_binary_expression] = 70,
        [sym_call_expression] = 70,
        [sym_member_expression] = 70,
        [sym_open_tag] = 72,
        [aux_sym__code_repeat1] = 74,
        [anon_sym_RBRACE] = 76,
        [anon_sym_var] = 78,
        [anon_sym_LT] = 22,
        [sym_string] = 70,
        [sym_identifier] = 80,
        [sym_number] = 70,
    },
    [122] = {
        [anon_sym_RBRACE] = 326,
    },
    [123] = {
        [sym_tag] = 226,
        [sym_interpolated_expression] = 226,
        [sym_interpolated_if_statement] = 226,
        [sym_interpolated_while_statement] = 226,
        [sym_interpolated_code_block] = 226,
        [sym_open_tag] = 226,
        [aux_sym__markup_repeat1] = 226,
        [ts_builtin_sym_end] = 226,
        [anon_sym_AT] = 226,
        [anon_sym_ATif] = 226,
        [anon_sym_ATwhile] = 226,
        [anon_sym_AT_LBRACE] = 226,
        [anon_sym_LT] = 226,
        [sym__word] = 226,
        [sym__non_word] = 226,
    },
    [124] = {
        [sym_tag] = 228,
        [sym_interpolated_expression] = 228,
        [sym_interpolated_if_statement] = 228,
        [sym_interpolated_while_statement] = 228,
        [sym_interpolated_code_block] = 228,
        [sym_open_tag] = 228,
        [aux_sym__markup_repeat1] = 228,
        [ts_builtin_sym_end] = 228,
        [anon_sym_AT] = 228,
        [anon_sym_LPAREN] = 328,
        [anon_sym_ATif] = 228,
        [anon_sym_ATwhile] = 228,
        [anon_sym_AT_LBRACE] = 228,
        [anon_sym_DOT] = 330,
        [anon_sym_LT] = 228,
        [sym__word] = 228,
        [sym__non_word] = 228,
    },
    [125] = {
        [sym_tag] = 234,
        [sym_interpolated_expression] = 234,
        [sym_interpolated_if_statement] = 234,
        [sym_interpolated_while_statement] = 234,
        [sym_interpolated_code_block] = 234,
        [sym_open_tag] = 234,
        [aux_sym__markup_repeat1] = 234,
        [ts_builtin_sym_end] = 234,
        [anon_sym_AT] = 234,
        [anon_sym_LPAREN] = 234,
        [anon_sym_ATif] = 234,
        [anon_sym_ATwhile] = 234,
        [anon_sym_AT_LBRACE] = 234,
        [anon_sym_DOT] = 234,
        [anon_sym_LT] = 234,
        [sym__word] = 234,
        [sym__non_word] = 234,
    },
    [126] = {
        [sym__expression] = 332,
        [sym_binary_expression] = 142,
        [sym_call_expression] = 142,
        [sym_member_expression] = 142,
        [sym_string] = 142,
        [sym_identifier] = 142,
        [sym_number] = 142,
    },
    [127] = {
        [anon_sym_LPAREN] = 144,
        [anon_sym_RPAREN] = 334,
        [anon_sym_PLUS] = 148,
        [anon_sym_DASH] = 148,
        [anon_sym_DOT] = 150,
    },
    [128] = {
        [sym_tag] = 240,
        [sym_interpolated_expression] = 240,
        [sym_interpolated_if_statement] = 240,
        [sym_interpolated_while_statement] = 240,
        [sym_interpolated_code_block] = 240,
        [sym_open_tag] = 240,
        [aux_sym__markup_repeat1] = 240,
        [ts_builtin_sym_end] = 240,
        [anon_sym_AT] = 240,
        [anon_sym_ATif] = 240,
        [anon_sym_ATwhile] = 240,
        [anon_sym_AT_LBRACE] = 240,
        [anon_sym_LT] = 240,
        [sym__word] = 240,
        [sym__non_word] = 240,
    },
    [129] = {
        [sym__expression] = 336,
        [sym_binary_expression] = 154,
        [sym_call_expression] = 154,
        [sym_member_expression] = 154,
        [anon_sym_RPAREN] = 338,
        [sym_string] = 154,
        [sym_identifier] = 154,
        [sym_number] = 154,
    },
    [130] = {
        [sym_identifier] = 340,
    },
    [131] = {
        [sym_tag] = 248,
        [sym_interpolated_expression] = 248,
        [sym_interpolated_if_statement] = 248,
        [sym_interpolated_while_statement] = 248,
        [sym_interpolated_code_block] = 248,
        [sym_open_tag] = 248,
        [aux_sym__markup_repeat1] = 248,
        [ts_builtin_sym_end] = 248,
        [anon_sym_AT] = 248,
        [anon_sym_LPAREN] = 248,
        [anon_sym_ATif] = 248,
        [anon_sym_ATwhile] = 248,
        [anon_sym_AT_LBRACE] = 248,
        [anon_sym_DOT] = 248,
        [anon_sym_LT] = 248,
        [sym__word] = 248,
        [sym__non_word] = 248,
    },
    [132] = {
        [aux_sym_call_expression_repeat1] = 342,
        [anon_sym_LPAREN] = 176,
        [anon_sym_RPAREN] = 344,
        [anon_sym_PLUS] = 180,
        [anon_sym_DASH] = 180,
        [anon_sym_COMMA] = 182,
        [anon_sym_DOT] = 184,
    },
    [133] = {
        [sym_tag] = 254,
        [sym_interpolated_expression] = 254,
        [sym_interpolated_if_statement] = 254,
        [sym_interpolated_while_statement] = 254,
        [sym_interpolated_code_block] = 254,
        [sym_open_tag] = 254,
        [aux_sym__markup_repeat1] = 254,
        [ts_builtin_sym_end] = 254,
        [anon_sym_AT] = 254,
        [anon_sym_LPAREN] = 254,
        [anon_sym_ATif] = 254,
        [anon_sym_ATwhile] = 254,
        [anon_sym_AT_LBRACE] = 254,
        [anon_sym_DOT] = 254,
        [anon_sym_LT] = 254,
        [sym__word] = 254,
        [sym__non_word] = 254,
    },
    [134] = {
        [anon_sym_RPAREN] = 346,
    },
    [135] = {
        [sym_tag] = 258,
        [sym_interpolated_expression] = 258,
        [sym_interpolated_if_statement] = 258,
        [sym_interpolated_while_statement] = 258,
        [sym_interpolated_code_block] = 258,
        [sym_open_tag] = 258,
        [aux_sym__markup_repeat1] = 258,
        [ts_builtin_sym_end] = 258,
        [anon_sym_AT] = 258,
        [anon_sym_LPAREN] = 258,
        [anon_sym_ATif] = 258,
        [anon_sym_ATwhile] = 258,
        [anon_sym_AT_LBRACE] = 258,
        [anon_sym_DOT] = 258,
        [anon_sym_LT] = 258,
        [sym__word] = 258,
        [sym__non_word] = 258,
    },
    [136] = {
        [sym_tag] = 260,
        [sym_interpolated_expression] = 260,
        [sym_interpolated_if_statement] = 260,
        [sym_interpolated_while_statement] = 260,
        [sym_interpolated_code_block] = 260,
        [sym_open_tag] = 260,
        [aux_sym__markup_repeat1] = 260,
        [ts_builtin_sym_end] = 260,
        [anon_sym_AT] = 260,
        [anon_sym_LPAREN] = 260,
        [anon_sym_ATif] = 260,
        [anon_sym_ATwhile] = 260,
        [anon_sym_AT_LBRACE] = 260,
        [anon_sym_DOT] = 260,
        [anon_sym_LT] = 260,
        [sym__word] = 260,
        [sym__non_word] = 260,
    },
    [137] = {
        [sym_close_tag] = 348,
        [anon_sym_LT_SLASH] = 350,
    },
    [138] = {
        [sym_tag] = 266,
        [sym_interpolated_expression] = 266,
        [sym_interpolated_if_statement] = 266,
        [sym_interpolated_while_statement] = 266,
        [sym_interpolated_code_block] = 266,
        [sym_open_tag] = 266,
        [aux_sym__markup_repeat1] = 266,
        [ts_builtin_sym_end] = 266,
        [anon_sym_AT] = 266,
        [anon_sym_ATif] = 266,
        [anon_sym_ATwhile] = 266,
        [anon_sym_AT_LBRACE] = 266,
        [anon_sym_LT] = 266,
        [sym__word] = 266,
        [sym__non_word] = 266,
    },
    [139] = {
        [sym__word] = 352,
    },
    [140] = {
        [anon_sym_GT] = 354,
    },
    [141] = {
        [sym_tag] = 272,
        [sym_interpolated_expression] = 272,
        [sym_interpolated_if_statement] = 272,
        [sym_interpolated_while_statement] = 272,
        [sym_interpolated_code_block] = 272,
        [sym_open_tag] = 272,
        [aux_sym__markup_repeat1] = 272,
        [ts_builtin_sym_end] = 272,
        [anon_sym_AT] = 272,
        [anon_sym_ATif] = 272,
        [anon_sym_ATwhile] = 272,
        [anon_sym_AT_LBRACE] = 272,
        [anon_sym_LT] = 272,
        [sym__word] = 272,
        [sym__non_word] = 272,
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 1}, ERROR(),
    [2] = {.count = 1}, SHIFT(1, 0),
    [4] = {.count = 1}, SHIFT(2, 0),
    [6] = {.count = 1}, SHIFT(3, 0),
    [8] = {.count = 1}, SHIFT(4, 0),
    [10] = {.count = 1}, SHIFT(5, 0),
    [12] = {.count = 1}, REDUCE(sym__markup, 0, 0),
    [14] = {.count = 1}, SHIFT(6, 0),
    [16] = {.count = 1}, SHIFT(7, 0),
    [18] = {.count = 1}, SHIFT(8, 0),
    [20] = {.count = 1}, SHIFT(9, 0),
    [22] = {.count = 1}, SHIFT(10, 0),
    [24] = {.count = 1}, ACCEPT_INPUT(),
    [26] = {.count = 1}, REDUCE(sym_document, 1, 0),
    [28] = {.count = 1}, SHIFT(11, 0),
    [30] = {.count = 1}, REDUCE(aux_sym__markup_repeat1, 1, 0),
    [32] = {.count = 1}, SHIFT(137, 0),
    [34] = {.count = 1}, SHIFT(25, 0),
    [36] = {.count = 1}, SHIFT(26, 0),
    [38] = {.count = 1}, SHIFT(27, 0),
    [40] = {.count = 1}, SHIFT(28, 0),
    [42] = {.count = 1}, SHIFT(29, 0),
    [44] = {.count = 1}, SHIFT(30, 0),
    [46] = {.count = 1}, SHIFT(31, 0),
    [48] = {.count = 1}, REDUCE(sym__markup, 1, 0),
    [50] = {.count = 1}, SHIFT(124, 0),
    [52] = {.count = 1}, SHIFT(125, 0),
    [54] = {.count = 1}, SHIFT(126, 0),
    [56] = {.count = 1}, SHIFT(118, 0),
    [58] = {.count = 1}, SHIFT(112, 0),
    [60] = {.count = 1}, SHIFT(14, 0),
    [62] = {.count = 1}, SHIFT(15, 0),
    [64] = {.count = 1}, SHIFT(16, 0),
    [66] = {.count = 1}, SHIFT(17, 0),
    [68] = {.count = 1}, SHIFT(18, 0),
    [70] = {.count = 1}, SHIFT(19, 0),
    [72] = {.count = 1}, SHIFT(20, 0),
    [74] = {.count = 1}, SHIFT(21, 0),
    [76] = {.count = 1}, REDUCE(sym__code, 0, 0),
    [78] = {.count = 1}, SHIFT(22, 0),
    [80] = {.count = 1}, SHIFT(23, 0),
    [82] = {.count = 1}, SHIFT(12, 0),
    [84] = {.count = 1}, REDUCE(aux_sym__markup_repeat1, 2, 0),
    [86] = {.count = 1}, SHIFT(13, 0),
    [88] = {.count = 1}, REDUCE(sym_open_tag, 3, 0),
    [90] = {.count = 1}, SHIFT(111, 0),
    [92] = {.count = 1}, SHIFT(109, 0),
    [94] = {.count = 1}, REDUCE(aux_sym__code_repeat1, 1, 0),
    [96] = {.count = 1}, SHIFT(98, 0),
    [98] = {.count = 1}, SHIFT(110, 0),
    [100] = {.count = 1}, SHIFT(100, 0),
    [102] = {.count = 1}, SHIFT(101, 0),
    [104] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [106] = {.count = 1}, SHIFT(94, 0),
    [108] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [110] = {.count = 1}, SHIFT(24, 0),
    [112] = {.count = 1}, REDUCE(sym__code, 1, 0),
    [114] = {.count = 1}, REDUCE(sym_type_specifier, 1, 0),
    [116] = {.count = 1}, SHIFT(90, 0),
    [118] = {.count = 1}, SHIFT(91, 0),
    [120] = {.count = 1}, SHIFT(32, 0),
    [122] = {.count = 1}, SHIFT(85, 0),
    [124] = {.count = 1}, SHIFT(72, 0),
    [126] = {.count = 1}, SHIFT(73, 0),
    [128] = {.count = 1}, SHIFT(74, 0),
    [130] = {.count = 1}, SHIFT(66, 0),
    [132] = {.count = 1}, SHIFT(35, 0),
    [134] = {.count = 1}, SHIFT(33, 0),
    [136] = {.count = 1}, SHIFT(34, 0),
    [138] = {.count = 1}, REDUCE(sym_interpolated_code_block, 3, 0),
    [140] = {.count = 1}, SHIFT(36, 0),
    [142] = {.count = 1}, SHIFT(37, 0),
    [144] = {.count = 1}, SHIFT(38, 0),
    [146] = {.count = 1}, SHIFT(39, 0),
    [148] = {.count = 1}, SHIFT(40, 0),
    [150] = {.count = 1}, SHIFT(41, 0),
    [152] = {.count = 1}, SHIFT(47, 0),
    [154] = {.count = 1}, SHIFT(48, 0),
    [156] = {.count = 1}, SHIFT(49, 0),
    [158] = {.count = 1}, SHIFT(44, 0),
    [160] = {.count = 1}, SHIFT(43, 0),
    [162] = {.count = 1}, SHIFT(42, 0),
    [164] = {.count = 1}, REDUCE(sym_member_expression, 3, 0),
    [166] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [168] = {.count = 1}, SHIFT(45, 0),
    [170] = {.count = 1}, SHIFT(46, 0),
    [172] = {.count = 1}, REDUCE(sym_interpolated_while_statement, 7, 0),
    [174] = {.count = 1}, SHIFT(50, 0),
    [176] = {.count = 1}, SHIFT(51, 0),
    [178] = {.count = 1}, SHIFT(52, 0),
    [180] = {.count = 1}, SHIFT(53, 0),
    [182] = {.count = 1}, SHIFT(54, 0),
    [184] = {.count = 1}, SHIFT(55, 0),
    [186] = {.count = 1}, REDUCE(sym_call_expression, 3, 0),
    [188] = {.count = 1}, SHIFT(65, 0),
    [190] = {.count = 1}, SHIFT(60, 0),
    [192] = {.count = 1}, SHIFT(61, 0),
    [194] = {.count = 1}, REDUCE(sym_call_expression, 4, 0),
    [196] = {.count = 1}, SHIFT(59, 0),
    [198] = {.count = 1}, SHIFT(57, 0),
    [200] = {.count = 1}, SHIFT(56, 0),
    [202] = {.count = 1}, SHIFT(58, 0),
    [204] = {.count = 1}, REDUCE(aux_sym_call_expression_repeat1, 2, 0),
    [206] = {.count = 1}, REDUCE(aux_sym_call_expression_repeat1, 3, 0),
    [208] = {.count = 1}, SHIFT(62, 0),
    [210] = {.count = 1}, SHIFT(63, 0),
    [212] = {.count = 1}, SHIFT(64, 0),
    [214] = {.count = 1}, REDUCE(sym_call_expression, 5, 0),
    [216] = {.count = 1}, SHIFT(67, 0),
    [218] = {.count = 1}, SHIFT(68, 0),
    [220] = {.count = 1}, SHIFT(69, 0),
    [222] = {.count = 1}, SHIFT(70, 0),
    [224] = {.count = 1}, SHIFT(71, 0),
    [226] = {.count = 1}, REDUCE(sym_interpolated_if_statement, 7, 0),
    [228] = {.count = 1}, REDUCE(sym_interpolated_expression, 2, 0),
    [230] = {.count = 1}, SHIFT(77, 0),
    [232] = {.count = 1}, SHIFT(78, 0),
    [234] = {.count = 1}, REDUCE(sym__simple_expression, 1, 0),
    [236] = {.count = 1}, SHIFT(75, 0),
    [238] = {.count = 1}, SHIFT(76, 0),
    [240] = {.count = 1}, REDUCE(sym_interpolated_expression, 4, 0),
    [242] = {.count = 1}, SHIFT(80, 0),
    [244] = {.count = 1}, SHIFT(81, 0),
    [246] = {.count = 1}, SHIFT(79, 0),
    [248] = {.count = 1}, REDUCE(sym_simple_member_expression, 3, 0),
    [250] = {.count = 1}, SHIFT(82, 0),
    [252] = {.count = 1}, SHIFT(83, 0),
    [254] = {.count = 1}, REDUCE(sym_simple_call_expression, 3, 0),
    [256] = {.count = 1}, SHIFT(84, 0),
    [258] = {.count = 1}, REDUCE(sym_simple_call_expression, 4, 0),
    [260] = {.count = 1}, REDUCE(sym_simple_call_expression, 5, 0),
    [262] = {.count = 1}, SHIFT(86, 0),
    [264] = {.count = 1}, SHIFT(87, 0),
    [266] = {.count = 1}, REDUCE(sym_tag, 3, 0),
    [268] = {.count = 1}, SHIFT(88, 0),
    [270] = {.count = 1}, SHIFT(89, 0),
    [272] = {.count = 1}, REDUCE(sym_close_tag, 3, 0),
    [274] = {.count = 1}, SHIFT(92, 0),
    [276] = {.count = 1}, SHIFT(93, 0),
    [278] = {.count = 1}, SHIFT(95, 0),
    [280] = {.count = 1}, SHIFT(96, 0),
    [282] = {.count = 1}, SHIFT(97, 0),
    [284] = {.count = 1}, REDUCE(sym_variable_declaration, 3, 0),
    [286] = {.count = 1}, SHIFT(99, 0),
    [288] = {.count = 1}, SHIFT(104, 0),
    [290] = {.count = 1}, SHIFT(105, 0),
    [292] = {.count = 1}, REDUCE(sym_variable_declaration, 5, 0),
    [294] = {.count = 1}, SHIFT(103, 0),
    [296] = {.count = 1}, SHIFT(102, 0),
    [298] = {.count = 1}, SHIFT(106, 0),
    [300] = {.count = 1}, SHIFT(107, 0),
    [302] = {.count = 1}, SHIFT(108, 0),
    [304] = {.count = 1}, REDUCE(aux_sym__code_repeat1, 2, 0),
    [306] = {.count = 1}, REDUCE(sym_expression_statement, 2, 0),
    [308] = {.count = 1}, SHIFT(113, 0),
    [310] = {.count = 1}, SHIFT(114, 0),
    [312] = {.count = 1}, SHIFT(115, 0),
    [314] = {.count = 1}, SHIFT(116, 0),
    [316] = {.count = 1}, SHIFT(117, 0),
    [318] = {.count = 1}, SHIFT(119, 0),
    [320] = {.count = 1}, SHIFT(120, 0),
    [322] = {.count = 1}, SHIFT(121, 0),
    [324] = {.count = 1}, SHIFT(122, 0),
    [326] = {.count = 1}, SHIFT(123, 0),
    [328] = {.count = 1}, SHIFT(129, 0),
    [330] = {.count = 1}, SHIFT(130, 0),
    [332] = {.count = 1}, SHIFT(127, 0),
    [334] = {.count = 1}, SHIFT(128, 0),
    [336] = {.count = 1}, SHIFT(132, 0),
    [338] = {.count = 1}, SHIFT(133, 0),
    [340] = {.count = 1}, SHIFT(131, 0),
    [342] = {.count = 1}, SHIFT(134, 0),
    [344] = {.count = 1}, SHIFT(135, 0),
    [346] = {.count = 1}, SHIFT(136, 0),
    [348] = {.count = 1}, SHIFT(138, 0),
    [350] = {.count = 1}, SHIFT(139, 0),
    [352] = {.count = 1}, SHIFT(140, 0),
    [354] = {.count = 1}, SHIFT(141, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_razor);
