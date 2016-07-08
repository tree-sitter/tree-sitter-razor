#include "tree_sitter/parser.h"

#define STATE_COUNT 153
#define SYMBOL_COUNT 42

enum {
    sym_document = ts_builtin_sym_start,
    sym__markup,
    sym_tag,
    sym_interpolated_expression,
    sym_interpolated_if_statement,
    sym_interpolated_while_statement,
    sym_interpolated_code_block,
    sym__expression,
    sym__statement,
    sym_expression_statement,
    sym_binary_expression,
    sym_call_expression,
    sym_member_expression,
    sym_simple_member_expression,
    sym_open_tag,
    sym_close_tag,
    sym__word,
    sym__tag_name,
    aux_sym__markup_repeat1,
    aux_sym_interpolated_code_block_repeat1,
    aux_sym_call_expression_repeat1,
    anon_sym_AT,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_ATif,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    anon_sym_ATwhile,
    anon_sym_SEMI,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_COMMA,
    anon_sym_DOT,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_LT_SLASH,
    sym_identifier,
    sym_number,
    aux_sym_SLASH_BSLASHa_PLUS_SLASH,
    sym__non_word,
};

static const char *ts_symbol_names[] = {
    [sym_document] = "document",
    [sym__markup] = "_markup",
    [sym_tag] = "tag",
    [sym_interpolated_expression] = "interpolated_expression",
    [sym_interpolated_if_statement] = "interpolated_if_statement",
    [sym_interpolated_while_statement] = "interpolated_while_statement",
    [sym_interpolated_code_block] = "interpolated_code_block",
    [sym__expression] = "_expression",
    [sym__statement] = "_statement",
    [sym_expression_statement] = "expression_statement",
    [sym_binary_expression] = "binary_expression",
    [sym_call_expression] = "call_expression",
    [sym_member_expression] = "member_expression",
    [sym_simple_member_expression] = "simple_member_expression",
    [sym_open_tag] = "open_tag",
    [sym_close_tag] = "close_tag",
    [sym__word] = "_word",
    [sym__tag_name] = "_tag_name",
    [aux_sym__markup_repeat1] = "_markup_repeat1",
    [aux_sym_interpolated_code_block_repeat1] = "interpolated_code_block_repeat1",
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
    [anon_sym_SEMI] = ";",
    [anon_sym_PLUS] = "+",
    [anon_sym_DASH] = "-",
    [anon_sym_COMMA] = ",",
    [anon_sym_DOT] = ".",
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
    [anon_sym_LT_SLASH] = "</",
    [sym_identifier] = "identifier",
    [sym_number] = "number",
    [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = "/\\a+/",
    [sym__non_word] = "_non_word",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [sym_document] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__markup] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_tag] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interpolated_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interpolated_if_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interpolated_while_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interpolated_code_block] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__statement] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_expression_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_binary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_call_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_member_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_simple_member_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_open_tag] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_close_tag] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__word] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym__tag_name] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym__markup_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_interpolated_code_block_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
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
    [anon_sym_SEMI] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DOT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_SLASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [sym_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_number] = {.visible = true, .named = true, .structural = true, .extra = false},
    [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
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
            if (lookahead == '(')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '-')
                ADVANCE(7);
            if (lookahead == '.')
                ADVANCE(8);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(10);
            if (lookahead == '<')
                ADVANCE(11);
            if (lookahead == '>')
                ADVANCE(13);
            if (lookahead == '@')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            if (lookahead == '{')
                ADVANCE(24);
            if (lookahead == '}')
                ADVANCE(25);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '(') ||
                (lookahead == ')') ||
                ('+' <= lookahead && lookahead <= '.') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == ';') ||
                (lookahead == '<') ||
                (lookahead == '>') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= '{') ||
                (lookahead == '}')))
                ADVANCE(26);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            START_TOKEN();
            ACCEPT_FRAGILE_TOKEN(sym__non_word);
        case 3:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 4:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 5:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 6:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 7:
            ACCEPT_TOKEN(anon_sym_DASH);
        case 8:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 9:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            ACCEPT_TOKEN(sym_number);
        case 10:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 11:
            if (lookahead == '/')
                ADVANCE(12);
            ACCEPT_TOKEN(anon_sym_LT);
        case 12:
            ACCEPT_TOKEN(anon_sym_LT_SLASH);
        case 13:
            ACCEPT_TOKEN(anon_sym_GT);
        case 14:
            if (lookahead == 'i')
                ADVANCE(15);
            if (lookahead == 'w')
                ADVANCE(17);
            ACCEPT_TOKEN(anon_sym_AT);
        case 15:
            if (lookahead == 'f')
                ADVANCE(16);
            LEX_ERROR();
        case 16:
            ACCEPT_TOKEN(anon_sym_ATif);
        case 17:
            if (lookahead == 'h')
                ADVANCE(18);
            LEX_ERROR();
        case 18:
            if (lookahead == 'i')
                ADVANCE(19);
            LEX_ERROR();
        case 19:
            if (lookahead == 'l')
                ADVANCE(20);
            LEX_ERROR();
        case 20:
            if (lookahead == 'e')
                ADVANCE(21);
            LEX_ERROR();
        case 21:
            ACCEPT_TOKEN(anon_sym_ATwhile);
        case 22:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(23);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier);
        case 24:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 25:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 26:
            ACCEPT_FRAGILE_TOKEN(sym__non_word);
        case 27:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '@')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(26);
            LEX_ERROR();
        case 28:
            ACCEPT_TOKEN(anon_sym_LT);
        case 29:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_BSLASHa_PLUS_SLASH);
        case 30:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(30);
            LEX_ERROR();
        case 31:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '<')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(26);
            LEX_ERROR();
        case 32:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(32);
            if (lookahead == '(')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == '{')
                ADVANCE(24);
            LEX_ERROR();
        case 33:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(33);
            if (lookahead == '(')
                ADVANCE(3);
            LEX_ERROR();
        case 34:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            LEX_ERROR();
        case 35:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(35);
            if (lookahead == '>')
                ADVANCE(13);
            LEX_ERROR();
        case 36:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '@')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(26);
            LEX_ERROR();
        case 37:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(37);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            LEX_ERROR();
        case 38:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(38);
            if (lookahead == '(')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(5);
            if (lookahead == '-')
                ADVANCE(7);
            if (lookahead == '.')
                ADVANCE(8);
            LEX_ERROR();
        case 39:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(39);
            if (lookahead == ')')
                ADVANCE(4);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            LEX_ERROR();
        case 40:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(40);
            if (lookahead == '{')
                ADVANCE(24);
            LEX_ERROR();
        case 41:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(41);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            LEX_ERROR();
        case 42:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '@')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            if (lookahead == '}')
                ADVANCE(25);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z') ||
                (lookahead == '}')))
                ADVANCE(26);
            LEX_ERROR();
        case 43:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(43);
            if (lookahead == '}')
                ADVANCE(25);
            LEX_ERROR();
        case 44:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '@')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            if (lookahead == '}')
                ADVANCE(25);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '.') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z') ||
                (lookahead == '}')))
                ADVANCE(26);
            LEX_ERROR();
        case 45:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(45);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(9);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(23);
            if (lookahead == '}')
                ADVANCE(25);
            LEX_ERROR();
        case 46:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(46);
            if (lookahead == '(')
                ADVANCE(3);
            if (lookahead == '+')
                ADVANCE(5);
            if (lookahead == '-')
                ADVANCE(7);
            if (lookahead == '.')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(10);
            LEX_ERROR();
        case 47:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(47);
            if (lookahead == '(')
                ADVANCE(3);
            if (lookahead == ')')
                ADVANCE(4);
            if (lookahead == '+')
                ADVANCE(5);
            if (lookahead == ',')
                ADVANCE(6);
            if (lookahead == '-')
                ADVANCE(7);
            if (lookahead == '.')
                ADVANCE(8);
            LEX_ERROR();
        case 48:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(48);
            if (lookahead == ')')
                ADVANCE(4);
            LEX_ERROR();
        case 49:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(49);
            if (lookahead == '<')
                ADVANCE(50);
            LEX_ERROR();
        case 50:
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 51:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(11);
            if (lookahead == '@')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '.') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(26);
            LEX_ERROR();
        case 52:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(28);
            if (lookahead == '@')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(29);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '.') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(26);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 27,
    [1] = 30,
    [2] = 30,
    [3] = 27,
    [4] = 31,
    [5] = 30,
    [6] = 32,
    [7] = 33,
    [8] = 33,
    [9] = 34,
    [10] = 27,
    [11] = 30,
    [12] = 35,
    [13] = 35,
    [14] = 36,
    [15] = 37,
    [16] = 38,
    [17] = 38,
    [18] = 39,
    [19] = 40,
    [20] = 37,
    [21] = 41,
    [22] = 38,
    [23] = 38,
    [24] = 42,
    [25] = 43,
    [26] = 42,
    [27] = 31,
    [28] = 43,
    [29] = 32,
    [30] = 33,
    [31] = 33,
    [32] = 42,
    [33] = 43,
    [34] = 37,
    [35] = 38,
    [36] = 40,
    [37] = 42,
    [38] = 43,
    [39] = 42,
    [40] = 37,
    [41] = 38,
    [42] = 40,
    [43] = 42,
    [44] = 43,
    [45] = 42,
    [46] = 44,
    [47] = 37,
    [48] = 45,
    [49] = 41,
    [50] = 44,
    [51] = 46,
    [52] = 45,
    [53] = 45,
    [54] = 46,
    [55] = 43,
    [56] = 42,
    [57] = 42,
    [58] = 43,
    [59] = 39,
    [60] = 45,
    [61] = 37,
    [62] = 41,
    [63] = 46,
    [64] = 46,
    [65] = 47,
    [66] = 47,
    [67] = 46,
    [68] = 48,
    [69] = 39,
    [70] = 46,
    [71] = 37,
    [72] = 37,
    [73] = 41,
    [74] = 47,
    [75] = 47,
    [76] = 48,
    [77] = 47,
    [78] = 47,
    [79] = 47,
    [80] = 48,
    [81] = 47,
    [82] = 47,
    [83] = 46,
    [84] = 38,
    [85] = 42,
    [86] = 49,
    [87] = 31,
    [88] = 31,
    [89] = 49,
    [90] = 32,
    [91] = 33,
    [92] = 33,
    [93] = 31,
    [94] = 49,
    [95] = 37,
    [96] = 38,
    [97] = 40,
    [98] = 42,
    [99] = 43,
    [100] = 31,
    [101] = 37,
    [102] = 38,
    [103] = 40,
    [104] = 42,
    [105] = 43,
    [106] = 31,
    [107] = 51,
    [108] = 37,
    [109] = 45,
    [110] = 41,
    [111] = 51,
    [112] = 43,
    [113] = 31,
    [114] = 31,
    [115] = 38,
    [116] = 31,
    [117] = 49,
    [118] = 31,
    [119] = 34,
    [120] = 35,
    [121] = 31,
    [122] = 42,
    [123] = 34,
    [124] = 35,
    [125] = 42,
    [126] = 27,
    [127] = 47,
    [128] = 38,
    [129] = 48,
    [130] = 38,
    [131] = 38,
    [132] = 37,
    [133] = 38,
    [134] = 40,
    [135] = 42,
    [136] = 43,
    [137] = 27,
    [138] = 52,
    [139] = 37,
    [140] = 45,
    [141] = 41,
    [142] = 52,
    [143] = 43,
    [144] = 27,
    [145] = 27,
    [146] = 38,
    [147] = 27,
    [148] = 49,
    [149] = 27,
    [150] = 34,
    [151] = 35,
    [152] = 27,
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
        [sym__word] = 6,
        [aux_sym__markup_repeat1] = 10,
        [ts_builtin_sym_end] = 12,
        [anon_sym_AT] = 14,
        [anon_sym_ATif] = 16,
        [anon_sym_ATwhile] = 18,
        [anon_sym_LT] = 20,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 22,
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
        [sym__word] = 6,
        [aux_sym__markup_repeat1] = 28,
        [ts_builtin_sym_end] = 30,
        [anon_sym_AT] = 14,
        [anon_sym_ATif] = 16,
        [anon_sym_ATwhile] = 18,
        [anon_sym_LT] = 20,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 22,
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
        [sym__word] = 34,
        [aux_sym__markup_repeat1] = 38,
        [anon_sym_AT] = 40,
        [anon_sym_ATif] = 42,
        [anon_sym_ATwhile] = 44,
        [anon_sym_LT] = 20,
        [anon_sym_LT_SLASH] = 12,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 46,
        [sym__non_word] = 34,
    },
    [5] = {
        [ts_builtin_sym_end] = 48,
    },
    [6] = {
        [sym_simple_member_expression] = 50,
        [anon_sym_LPAREN] = 52,
        [anon_sym_LBRACE] = 54,
        [sym_identifier] = 50,
    },
    [7] = {
        [anon_sym_LPAREN] = 56,
    },
    [8] = {
        [anon_sym_LPAREN] = 58,
    },
    [9] = {
        [sym__tag_name] = 60,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 62,
    },
    [10] = {
        [sym_tag] = 64,
        [sym_interpolated_expression] = 64,
        [sym_interpolated_if_statement] = 64,
        [sym_interpolated_while_statement] = 64,
        [sym_interpolated_code_block] = 64,
        [sym_open_tag] = 64,
        [sym__word] = 64,
        [aux_sym__markup_repeat1] = 64,
        [ts_builtin_sym_end] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_ATif] = 64,
        [anon_sym_ATwhile] = 64,
        [anon_sym_LT] = 64,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 64,
        [sym__non_word] = 64,
    },
    [11] = {
        [ts_builtin_sym_end] = 66,
    },
    [12] = {
        [anon_sym_GT] = 68,
    },
    [13] = {
        [anon_sym_GT] = 70,
    },
    [14] = {
        [sym__markup] = 72,
        [sym_tag] = 72,
        [sym_interpolated_expression] = 72,
        [sym_interpolated_if_statement] = 72,
        [sym_interpolated_while_statement] = 72,
        [sym_interpolated_code_block] = 72,
        [sym_open_tag] = 72,
        [sym__word] = 72,
        [aux_sym__markup_repeat1] = 72,
        [anon_sym_AT] = 72,
        [anon_sym_ATif] = 72,
        [anon_sym_ATwhile] = 72,
        [anon_sym_LT] = 72,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 72,
        [sym__non_word] = 72,
    },
    [15] = {
        [sym__expression] = 74,
        [sym_binary_expression] = 76,
        [sym_call_expression] = 76,
        [sym_member_expression] = 76,
        [sym_identifier] = 76,
        [sym_number] = 76,
    },
    [16] = {
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 80,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_DOT] = 84,
    },
    [17] = {
        [anon_sym_LPAREN] = 86,
        [anon_sym_RPAREN] = 86,
        [anon_sym_PLUS] = 86,
        [anon_sym_DASH] = 86,
        [anon_sym_DOT] = 86,
    },
    [18] = {
        [sym__expression] = 88,
        [sym_binary_expression] = 90,
        [sym_call_expression] = 90,
        [sym_member_expression] = 90,
        [anon_sym_RPAREN] = 92,
        [sym_identifier] = 90,
        [sym_number] = 90,
    },
    [19] = {
        [anon_sym_LBRACE] = 94,
    },
    [20] = {
        [sym__expression] = 96,
        [sym_binary_expression] = 76,
        [sym_call_expression] = 76,
        [sym_member_expression] = 76,
        [sym_identifier] = 76,
        [sym_number] = 76,
    },
    [21] = {
        [sym_identifier] = 98,
    },
    [22] = {
        [anon_sym_LPAREN] = 100,
        [anon_sym_RPAREN] = 100,
        [anon_sym_PLUS] = 100,
        [anon_sym_DASH] = 100,
        [anon_sym_DOT] = 100,
    },
    [23] = {
        [anon_sym_LPAREN] = 102,
        [anon_sym_RPAREN] = 102,
        [anon_sym_PLUS] = 102,
        [anon_sym_DASH] = 102,
        [anon_sym_DOT] = 102,
    },
    [24] = {
        [sym__markup] = 104,
        [sym_tag] = 106,
        [sym_interpolated_expression] = 106,
        [sym_interpolated_if_statement] = 106,
        [sym_interpolated_while_statement] = 106,
        [sym_interpolated_code_block] = 106,
        [sym_open_tag] = 108,
        [sym__word] = 106,
        [aux_sym__markup_repeat1] = 110,
        [anon_sym_AT] = 112,
        [anon_sym_ATif] = 114,
        [anon_sym_RBRACE] = 12,
        [anon_sym_ATwhile] = 116,
        [anon_sym_LT] = 20,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 118,
        [sym__non_word] = 106,
    },
    [25] = {
        [anon_sym_RBRACE] = 120,
    },
    [26] = {
        [sym_tag] = 106,
        [sym_interpolated_expression] = 106,
        [sym_interpolated_if_statement] = 106,
        [sym_interpolated_while_statement] = 106,
        [sym_interpolated_code_block] = 106,
        [sym_open_tag] = 108,
        [sym__word] = 106,
        [aux_sym__markup_repeat1] = 122,
        [anon_sym_AT] = 112,
        [anon_sym_ATif] = 114,
        [anon_sym_RBRACE] = 30,
        [anon_sym_ATwhile] = 116,
        [anon_sym_LT] = 20,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 118,
        [sym__non_word] = 106,
    },
    [27] = {
        [sym__markup] = 124,
        [sym_tag] = 34,
        [sym_interpolated_expression] = 34,
        [sym_interpolated_if_statement] = 34,
        [sym_interpolated_while_statement] = 34,
        [sym_interpolated_code_block] = 34,
        [sym_open_tag] = 36,
        [sym_close_tag] = 12,
        [sym__word] = 34,
        [aux_sym__markup_repeat1] = 38,
        [anon_sym_AT] = 40,
        [anon_sym_ATif] = 42,
        [anon_sym_ATwhile] = 44,
        [anon_sym_LT] = 20,
        [anon_sym_LT_SLASH] = 12,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 46,
        [sym__non_word] = 34,
    },
    [28] = {
        [anon_sym_RBRACE] = 48,
    },
    [29] = {
        [sym_simple_member_expression] = 126,
        [anon_sym_LPAREN] = 128,
        [anon_sym_LBRACE] = 130,
        [sym_identifier] = 126,
    },
    [30] = {
        [anon_sym_LPAREN] = 132,
    },
    [31] = {
        [anon_sym_LPAREN] = 134,
    },
    [32] = {
        [sym_tag] = 64,
        [sym_interpolated_expression] = 64,
        [sym_interpolated_if_statement] = 64,
        [sym_interpolated_while_statement] = 64,
        [sym_interpolated_code_block] = 64,
        [sym_open_tag] = 64,
        [sym__word] = 64,
        [aux_sym__markup_repeat1] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_ATif] = 64,
        [anon_sym_RBRACE] = 64,
        [anon_sym_ATwhile] = 64,
        [anon_sym_LT] = 64,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 64,
        [sym__non_word] = 64,
    },
    [33] = {
        [anon_sym_RBRACE] = 66,
    },
    [34] = {
        [sym__expression] = 136,
        [sym_binary_expression] = 76,
        [sym_call_expression] = 76,
        [sym_member_expression] = 76,
        [sym_identifier] = 76,
        [sym_number] = 76,
    },
    [35] = {
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 138,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_DOT] = 84,
    },
    [36] = {
        [anon_sym_LBRACE] = 140,
    },
    [37] = {
        [sym__markup] = 142,
        [sym_tag] = 106,
        [sym_interpolated_expression] = 106,
        [sym_interpolated_if_statement] = 106,
        [sym_interpolated_while_statement] = 106,
        [sym_interpolated_code_block] = 106,
        [sym_open_tag] = 108,
        [sym__word] = 106,
        [aux_sym__markup_repeat1] = 110,
        [anon_sym_AT] = 112,
        [anon_sym_ATif] = 114,
        [anon_sym_RBRACE] = 12,
        [anon_sym_ATwhile] = 116,
        [anon_sym_LT] = 20,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 118,
        [sym__non_word] = 106,
    },
    [38] = {
        [anon_sym_RBRACE] = 144,
    },
    [39] = {
        [sym_tag] = 146,
        [sym_interpolated_expression] = 146,
        [sym_interpolated_if_statement] = 146,
        [sym_interpolated_while_statement] = 146,
        [sym_interpolated_code_block] = 146,
        [sym_open_tag] = 146,
        [sym__word] = 146,
        [aux_sym__markup_repeat1] = 146,
        [anon_sym_AT] = 146,
        [anon_sym_ATif] = 146,
        [anon_sym_RBRACE] = 146,
        [anon_sym_ATwhile] = 146,
        [anon_sym_LT] = 146,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 146,
        [sym__non_word] = 146,
    },
    [40] = {
        [sym__expression] = 148,
        [sym_binary_expression] = 76,
        [sym_call_expression] = 76,
        [sym_member_expression] = 76,
        [sym_identifier] = 76,
        [sym_number] = 76,
    },
    [41] = {
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 150,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_DOT] = 84,
    },
    [42] = {
        [anon_sym_LBRACE] = 152,
    },
    [43] = {
        [sym__markup] = 154,
        [sym_tag] = 106,
        [sym_interpolated_expression] = 106,
        [sym_interpolated_if_statement] = 106,
        [sym_interpolated_while_statement] = 106,
        [sym_interpolated_code_block] = 106,
        [sym_open_tag] = 108,
        [sym__word] = 106,
        [aux_sym__markup_repeat1] = 110,
        [anon_sym_AT] = 112,
        [anon_sym_ATif] = 114,
        [anon_sym_RBRACE] = 12,
        [anon_sym_ATwhile] = 116,
        [anon_sym_LT] = 20,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 118,
        [sym__non_word] = 106,
    },
    [44] = {
        [anon_sym_RBRACE] = 156,
    },
    [45] = {
        [sym_tag] = 158,
        [sym_interpolated_expression] = 158,
        [sym_interpolated_if_statement] = 158,
        [sym_interpolated_while_statement] = 158,
        [sym_interpolated_code_block] = 158,
        [sym_open_tag] = 158,
        [sym__word] = 158,
        [aux_sym__markup_repeat1] = 158,
        [anon_sym_AT] = 158,
        [anon_sym_ATif] = 158,
        [anon_sym_RBRACE] = 158,
        [anon_sym_ATwhile] = 158,
        [anon_sym_LT] = 158,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 158,
        [sym__non_word] = 158,
    },
    [46] = {
        [sym_tag] = 160,
        [sym_interpolated_expression] = 160,
        [sym_interpolated_if_statement] = 160,
        [sym_interpolated_while_statement] = 160,
        [sym_interpolated_code_block] = 160,
        [sym_open_tag] = 160,
        [sym__word] = 160,
        [aux_sym__markup_repeat1] = 160,
        [anon_sym_AT] = 160,
        [anon_sym_ATif] = 160,
        [anon_sym_RBRACE] = 160,
        [anon_sym_ATwhile] = 160,
        [anon_sym_DOT] = 162,
        [anon_sym_LT] = 160,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 160,
        [sym__non_word] = 160,
    },
    [47] = {
        [sym__expression] = 164,
        [sym_binary_expression] = 76,
        [sym_call_expression] = 76,
        [sym_member_expression] = 76,
        [sym_identifier] = 76,
        [sym_number] = 76,
    },
    [48] = {
        [sym__expression] = 166,
        [sym__statement] = 168,
        [sym_expression_statement] = 170,
        [sym_binary_expression] = 172,
        [sym_call_expression] = 172,
        [sym_member_expression] = 172,
        [aux_sym_interpolated_code_block_repeat1] = 174,
        [anon_sym_RBRACE] = 176,
        [sym_identifier] = 172,
        [sym_number] = 172,
    },
    [49] = {
        [sym_identifier] = 178,
    },
    [50] = {
        [sym_tag] = 180,
        [sym_interpolated_expression] = 180,
        [sym_interpolated_if_statement] = 180,
        [sym_interpolated_while_statement] = 180,
        [sym_interpolated_code_block] = 180,
        [sym_open_tag] = 180,
        [sym__word] = 180,
        [aux_sym__markup_repeat1] = 180,
        [anon_sym_AT] = 180,
        [anon_sym_ATif] = 180,
        [anon_sym_RBRACE] = 180,
        [anon_sym_ATwhile] = 180,
        [anon_sym_DOT] = 180,
        [anon_sym_LT] = 180,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 180,
        [sym__non_word] = 180,
    },
    [51] = {
        [anon_sym_LPAREN] = 182,
        [anon_sym_SEMI] = 184,
        [anon_sym_PLUS] = 186,
        [anon_sym_DASH] = 186,
        [anon_sym_DOT] = 188,
    },
    [52] = {
        [sym__expression] = 166,
        [sym__statement] = 168,
        [sym_expression_statement] = 170,
        [sym_binary_expression] = 172,
        [sym_call_expression] = 172,
        [sym_member_expression] = 172,
        [aux_sym_interpolated_code_block_repeat1] = 190,
        [anon_sym_RBRACE] = 192,
        [sym_identifier] = 172,
        [sym_number] = 172,
    },
    [53] = {
        [sym__expression] = 194,
        [sym__statement] = 194,
        [sym_expression_statement] = 194,
        [sym_binary_expression] = 194,
        [sym_call_expression] = 194,
        [sym_member_expression] = 194,
        [aux_sym_interpolated_code_block_repeat1] = 194,
        [anon_sym_RBRACE] = 194,
        [sym_identifier] = 194,
        [sym_number] = 194,
    },
    [54] = {
        [anon_sym_LPAREN] = 86,
        [anon_sym_SEMI] = 86,
        [anon_sym_PLUS] = 86,
        [anon_sym_DASH] = 86,
        [anon_sym_DOT] = 86,
    },
    [55] = {
        [anon_sym_RBRACE] = 196,
    },
    [56] = {
        [sym_tag] = 198,
        [sym_interpolated_expression] = 198,
        [sym_interpolated_if_statement] = 198,
        [sym_interpolated_while_statement] = 198,
        [sym_interpolated_code_block] = 198,
        [sym_open_tag] = 198,
        [sym__word] = 198,
        [aux_sym__markup_repeat1] = 198,
        [anon_sym_AT] = 198,
        [anon_sym_ATif] = 198,
        [anon_sym_RBRACE] = 198,
        [anon_sym_ATwhile] = 198,
        [anon_sym_LT] = 198,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 198,
        [sym__non_word] = 198,
    },
    [57] = {
        [sym_tag] = 200,
        [sym_interpolated_expression] = 200,
        [sym_interpolated_if_statement] = 200,
        [sym_interpolated_while_statement] = 200,
        [sym_interpolated_code_block] = 200,
        [sym_open_tag] = 200,
        [sym__word] = 200,
        [aux_sym__markup_repeat1] = 200,
        [anon_sym_AT] = 200,
        [anon_sym_ATif] = 200,
        [anon_sym_RBRACE] = 200,
        [anon_sym_ATwhile] = 200,
        [anon_sym_LT] = 200,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 200,
        [sym__non_word] = 200,
    },
    [58] = {
        [anon_sym_RBRACE] = 202,
    },
    [59] = {
        [sym__expression] = 204,
        [sym_binary_expression] = 90,
        [sym_call_expression] = 90,
        [sym_member_expression] = 90,
        [anon_sym_RPAREN] = 206,
        [sym_identifier] = 90,
        [sym_number] = 90,
    },
    [60] = {
        [sym__expression] = 208,
        [sym__statement] = 208,
        [sym_expression_statement] = 208,
        [sym_binary_expression] = 208,
        [sym_call_expression] = 208,
        [sym_member_expression] = 208,
        [aux_sym_interpolated_code_block_repeat1] = 208,
        [anon_sym_RBRACE] = 208,
        [sym_identifier] = 208,
        [sym_number] = 208,
    },
    [61] = {
        [sym__expression] = 210,
        [sym_binary_expression] = 172,
        [sym_call_expression] = 172,
        [sym_member_expression] = 172,
        [sym_identifier] = 172,
        [sym_number] = 172,
    },
    [62] = {
        [sym_identifier] = 212,
    },
    [63] = {
        [anon_sym_LPAREN] = 100,
        [anon_sym_SEMI] = 100,
        [anon_sym_PLUS] = 100,
        [anon_sym_DASH] = 100,
        [anon_sym_DOT] = 100,
    },
    [64] = {
        [anon_sym_LPAREN] = 102,
        [anon_sym_SEMI] = 102,
        [anon_sym_PLUS] = 102,
        [anon_sym_DASH] = 102,
        [anon_sym_DOT] = 102,
    },
    [65] = {
        [aux_sym_call_expression_repeat1] = 214,
        [anon_sym_LPAREN] = 216,
        [anon_sym_RPAREN] = 218,
        [anon_sym_PLUS] = 220,
        [anon_sym_DASH] = 220,
        [anon_sym_COMMA] = 222,
        [anon_sym_DOT] = 224,
    },
    [66] = {
        [aux_sym_call_expression_repeat1] = 86,
        [anon_sym_LPAREN] = 86,
        [anon_sym_RPAREN] = 86,
        [anon_sym_PLUS] = 86,
        [anon_sym_DASH] = 86,
        [anon_sym_COMMA] = 86,
        [anon_sym_DOT] = 86,
    },
    [67] = {
        [anon_sym_LPAREN] = 226,
        [anon_sym_SEMI] = 226,
        [anon_sym_PLUS] = 226,
        [anon_sym_DASH] = 226,
        [anon_sym_DOT] = 226,
    },
    [68] = {
        [anon_sym_RPAREN] = 228,
    },
    [69] = {
        [sym__expression] = 230,
        [sym_binary_expression] = 90,
        [sym_call_expression] = 90,
        [sym_member_expression] = 90,
        [anon_sym_RPAREN] = 232,
        [sym_identifier] = 90,
        [sym_number] = 90,
    },
    [70] = {
        [anon_sym_LPAREN] = 234,
        [anon_sym_SEMI] = 234,
        [anon_sym_PLUS] = 234,
        [anon_sym_DASH] = 234,
        [anon_sym_DOT] = 234,
    },
    [71] = {
        [sym__expression] = 236,
        [sym_binary_expression] = 90,
        [sym_call_expression] = 90,
        [sym_member_expression] = 90,
        [sym_identifier] = 90,
        [sym_number] = 90,
    },
    [72] = {
        [sym__expression] = 238,
        [sym_binary_expression] = 90,
        [sym_call_expression] = 90,
        [sym_member_expression] = 90,
        [sym_identifier] = 90,
        [sym_number] = 90,
    },
    [73] = {
        [sym_identifier] = 240,
    },
    [74] = {
        [aux_sym_call_expression_repeat1] = 100,
        [anon_sym_LPAREN] = 100,
        [anon_sym_RPAREN] = 100,
        [anon_sym_PLUS] = 100,
        [anon_sym_DASH] = 100,
        [anon_sym_COMMA] = 100,
        [anon_sym_DOT] = 100,
    },
    [75] = {
        [aux_sym_call_expression_repeat1] = 242,
        [anon_sym_LPAREN] = 216,
        [anon_sym_RPAREN] = 244,
        [anon_sym_PLUS] = 220,
        [anon_sym_DASH] = 220,
        [anon_sym_COMMA] = 222,
        [anon_sym_DOT] = 224,
    },
    [76] = {
        [anon_sym_RPAREN] = 246,
    },
    [77] = {
        [aux_sym_call_expression_repeat1] = 102,
        [anon_sym_LPAREN] = 102,
        [anon_sym_RPAREN] = 102,
        [anon_sym_PLUS] = 102,
        [anon_sym_DASH] = 102,
        [anon_sym_COMMA] = 102,
        [anon_sym_DOT] = 102,
    },
    [78] = {
        [aux_sym_call_expression_repeat1] = 248,
        [anon_sym_LPAREN] = 216,
        [anon_sym_RPAREN] = 250,
        [anon_sym_PLUS] = 220,
        [anon_sym_DASH] = 220,
        [anon_sym_COMMA] = 222,
        [anon_sym_DOT] = 224,
    },
    [79] = {
        [aux_sym_call_expression_repeat1] = 226,
        [anon_sym_LPAREN] = 226,
        [anon_sym_RPAREN] = 226,
        [anon_sym_PLUS] = 226,
        [anon_sym_DASH] = 226,
        [anon_sym_COMMA] = 226,
        [anon_sym_DOT] = 226,
    },
    [80] = {
        [anon_sym_RPAREN] = 252,
    },
    [81] = {
        [aux_sym_call_expression_repeat1] = 234,
        [anon_sym_LPAREN] = 234,
        [anon_sym_RPAREN] = 234,
        [anon_sym_PLUS] = 234,
        [anon_sym_DASH] = 234,
        [anon_sym_COMMA] = 234,
        [anon_sym_DOT] = 234,
    },
    [82] = {
        [aux_sym_call_expression_repeat1] = 254,
        [anon_sym_LPAREN] = 254,
        [anon_sym_RPAREN] = 254,
        [anon_sym_PLUS] = 254,
        [anon_sym_DASH] = 254,
        [anon_sym_COMMA] = 254,
        [anon_sym_DOT] = 254,
    },
    [83] = {
        [anon_sym_LPAREN] = 254,
        [anon_sym_SEMI] = 254,
        [anon_sym_PLUS] = 254,
        [anon_sym_DASH] = 254,
        [anon_sym_DOT] = 254,
    },
    [84] = {
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 256,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_DOT] = 84,
    },
    [85] = {
        [sym_tag] = 258,
        [sym_interpolated_expression] = 258,
        [sym_interpolated_if_statement] = 258,
        [sym_interpolated_while_statement] = 258,
        [sym_interpolated_code_block] = 258,
        [sym_open_tag] = 258,
        [sym__word] = 258,
        [aux_sym__markup_repeat1] = 258,
        [anon_sym_AT] = 258,
        [anon_sym_ATif] = 258,
        [anon_sym_RBRACE] = 258,
        [anon_sym_ATwhile] = 258,
        [anon_sym_LT] = 258,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 258,
        [sym__non_word] = 258,
    },
    [86] = {
        [sym_close_tag] = 260,
        [anon_sym_LT_SLASH] = 262,
    },
    [87] = {
        [sym_tag] = 34,
        [sym_interpolated_expression] = 34,
        [sym_interpolated_if_statement] = 34,
        [sym_interpolated_while_statement] = 34,
        [sym_interpolated_code_block] = 34,
        [sym_open_tag] = 36,
        [sym_close_tag] = 30,
        [sym__word] = 34,
        [aux_sym__markup_repeat1] = 264,
        [anon_sym_AT] = 40,
        [anon_sym_ATif] = 42,
        [anon_sym_ATwhile] = 44,
        [anon_sym_LT] = 20,
        [anon_sym_LT_SLASH] = 30,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 46,
        [sym__non_word] = 34,
    },
    [88] = {
        [sym__markup] = 266,
        [sym_tag] = 34,
        [sym_interpolated_expression] = 34,
        [sym_interpolated_if_statement] = 34,
        [sym_interpolated_while_statement] = 34,
        [sym_interpolated_code_block] = 34,
        [sym_open_tag] = 36,
        [sym_close_tag] = 12,
        [sym__word] = 34,
        [aux_sym__markup_repeat1] = 38,
        [anon_sym_AT] = 40,
        [anon_sym_ATif] = 42,
        [anon_sym_ATwhile] = 44,
        [anon_sym_LT] = 20,
        [anon_sym_LT_SLASH] = 12,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 46,
        [sym__non_word] = 34,
    },
    [89] = {
        [sym_close_tag] = 48,
        [anon_sym_LT_SLASH] = 48,
    },
    [90] = {
        [sym_simple_member_expression] = 268,
        [anon_sym_LPAREN] = 270,
        [anon_sym_LBRACE] = 272,
        [sym_identifier] = 268,
    },
    [91] = {
        [anon_sym_LPAREN] = 274,
    },
    [92] = {
        [anon_sym_LPAREN] = 276,
    },
    [93] = {
        [sym_tag] = 64,
        [sym_interpolated_expression] = 64,
        [sym_interpolated_if_statement] = 64,
        [sym_interpolated_while_statement] = 64,
        [sym_interpolated_code_block] = 64,
        [sym_open_tag] = 64,
        [sym_close_tag] = 64,
        [sym__word] = 64,
        [aux_sym__markup_repeat1] = 64,
        [anon_sym_AT] = 64,
        [anon_sym_ATif] = 64,
        [anon_sym_ATwhile] = 64,
        [anon_sym_LT] = 64,
        [anon_sym_LT_SLASH] = 64,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 64,
        [sym__non_word] = 64,
    },
    [94] = {
        [sym_close_tag] = 66,
        [anon_sym_LT_SLASH] = 66,
    },
    [95] = {
        [sym__expression] = 278,
        [sym_binary_expression] = 76,
        [sym_call_expression] = 76,
        [sym_member_expression] = 76,
        [sym_identifier] = 76,
        [sym_number] = 76,
    },
    [96] = {
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 280,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_DOT] = 84,
    },
    [97] = {
        [anon_sym_LBRACE] = 282,
    },
    [98] = {
        [sym__markup] = 284,
        [sym_tag] = 106,
        [sym_interpolated_expression] = 106,
        [sym_interpolated_if_statement] = 106,
        [sym_interpolated_while_statement] = 106,
        [sym_interpolated_code_block] = 106,
        [sym_open_tag] = 108,
        [sym__word] = 106,
        [aux_sym__markup_repeat1] = 110,
        [anon_sym_AT] = 112,
        [anon_sym_ATif] = 114,
        [anon_sym_RBRACE] = 12,
        [anon_sym_ATwhile] = 116,
        [anon_sym_LT] = 20,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 118,
        [sym__non_word] = 106,
    },
    [99] = {
        [anon_sym_RBRACE] = 286,
    },
    [100] = {
        [sym_tag] = 146,
        [sym_interpolated_expression] = 146,
        [sym_interpolated_if_statement] = 146,
        [sym_interpolated_while_statement] = 146,
        [sym_interpolated_code_block] = 146,
        [sym_open_tag] = 146,
        [sym_close_tag] = 146,
        [sym__word] = 146,
        [aux_sym__markup_repeat1] = 146,
        [anon_sym_AT] = 146,
        [anon_sym_ATif] = 146,
        [anon_sym_ATwhile] = 146,
        [anon_sym_LT] = 146,
        [anon_sym_LT_SLASH] = 146,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 146,
        [sym__non_word] = 146,
    },
    [101] = {
        [sym__expression] = 288,
        [sym_binary_expression] = 76,
        [sym_call_expression] = 76,
        [sym_member_expression] = 76,
        [sym_identifier] = 76,
        [sym_number] = 76,
    },
    [102] = {
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 290,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_DOT] = 84,
    },
    [103] = {
        [anon_sym_LBRACE] = 292,
    },
    [104] = {
        [sym__markup] = 294,
        [sym_tag] = 106,
        [sym_interpolated_expression] = 106,
        [sym_interpolated_if_statement] = 106,
        [sym_interpolated_while_statement] = 106,
        [sym_interpolated_code_block] = 106,
        [sym_open_tag] = 108,
        [sym__word] = 106,
        [aux_sym__markup_repeat1] = 110,
        [anon_sym_AT] = 112,
        [anon_sym_ATif] = 114,
        [anon_sym_RBRACE] = 12,
        [anon_sym_ATwhile] = 116,
        [anon_sym_LT] = 20,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 118,
        [sym__non_word] = 106,
    },
    [105] = {
        [anon_sym_RBRACE] = 296,
    },
    [106] = {
        [sym_tag] = 158,
        [sym_interpolated_expression] = 158,
        [sym_interpolated_if_statement] = 158,
        [sym_interpolated_while_statement] = 158,
        [sym_interpolated_code_block] = 158,
        [sym_open_tag] = 158,
        [sym_close_tag] = 158,
        [sym__word] = 158,
        [aux_sym__markup_repeat1] = 158,
        [anon_sym_AT] = 158,
        [anon_sym_ATif] = 158,
        [anon_sym_ATwhile] = 158,
        [anon_sym_LT] = 158,
        [anon_sym_LT_SLASH] = 158,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 158,
        [sym__non_word] = 158,
    },
    [107] = {
        [sym_tag] = 160,
        [sym_interpolated_expression] = 160,
        [sym_interpolated_if_statement] = 160,
        [sym_interpolated_while_statement] = 160,
        [sym_interpolated_code_block] = 160,
        [sym_open_tag] = 160,
        [sym_close_tag] = 160,
        [sym__word] = 160,
        [aux_sym__markup_repeat1] = 160,
        [anon_sym_AT] = 160,
        [anon_sym_ATif] = 160,
        [anon_sym_ATwhile] = 160,
        [anon_sym_DOT] = 298,
        [anon_sym_LT] = 160,
        [anon_sym_LT_SLASH] = 160,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 160,
        [sym__non_word] = 160,
    },
    [108] = {
        [sym__expression] = 300,
        [sym_binary_expression] = 76,
        [sym_call_expression] = 76,
        [sym_member_expression] = 76,
        [sym_identifier] = 76,
        [sym_number] = 76,
    },
    [109] = {
        [sym__expression] = 166,
        [sym__statement] = 168,
        [sym_expression_statement] = 170,
        [sym_binary_expression] = 172,
        [sym_call_expression] = 172,
        [sym_member_expression] = 172,
        [aux_sym_interpolated_code_block_repeat1] = 302,
        [anon_sym_RBRACE] = 304,
        [sym_identifier] = 172,
        [sym_number] = 172,
    },
    [110] = {
        [sym_identifier] = 306,
    },
    [111] = {
        [sym_tag] = 180,
        [sym_interpolated_expression] = 180,
        [sym_interpolated_if_statement] = 180,
        [sym_interpolated_while_statement] = 180,
        [sym_interpolated_code_block] = 180,
        [sym_open_tag] = 180,
        [sym_close_tag] = 180,
        [sym__word] = 180,
        [aux_sym__markup_repeat1] = 180,
        [anon_sym_AT] = 180,
        [anon_sym_ATif] = 180,
        [anon_sym_ATwhile] = 180,
        [anon_sym_DOT] = 180,
        [anon_sym_LT] = 180,
        [anon_sym_LT_SLASH] = 180,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 180,
        [sym__non_word] = 180,
    },
    [112] = {
        [anon_sym_RBRACE] = 308,
    },
    [113] = {
        [sym_tag] = 198,
        [sym_interpolated_expression] = 198,
        [sym_interpolated_if_statement] = 198,
        [sym_interpolated_while_statement] = 198,
        [sym_interpolated_code_block] = 198,
        [sym_open_tag] = 198,
        [sym_close_tag] = 198,
        [sym__word] = 198,
        [aux_sym__markup_repeat1] = 198,
        [anon_sym_AT] = 198,
        [anon_sym_ATif] = 198,
        [anon_sym_ATwhile] = 198,
        [anon_sym_LT] = 198,
        [anon_sym_LT_SLASH] = 198,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 198,
        [sym__non_word] = 198,
    },
    [114] = {
        [sym_tag] = 200,
        [sym_interpolated_expression] = 200,
        [sym_interpolated_if_statement] = 200,
        [sym_interpolated_while_statement] = 200,
        [sym_interpolated_code_block] = 200,
        [sym_open_tag] = 200,
        [sym_close_tag] = 200,
        [sym__word] = 200,
        [aux_sym__markup_repeat1] = 200,
        [anon_sym_AT] = 200,
        [anon_sym_ATif] = 200,
        [anon_sym_ATwhile] = 200,
        [anon_sym_LT] = 200,
        [anon_sym_LT_SLASH] = 200,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 200,
        [sym__non_word] = 200,
    },
    [115] = {
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 310,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_DOT] = 84,
    },
    [116] = {
        [sym_tag] = 258,
        [sym_interpolated_expression] = 258,
        [sym_interpolated_if_statement] = 258,
        [sym_interpolated_while_statement] = 258,
        [sym_interpolated_code_block] = 258,
        [sym_open_tag] = 258,
        [sym_close_tag] = 258,
        [sym__word] = 258,
        [aux_sym__markup_repeat1] = 258,
        [anon_sym_AT] = 258,
        [anon_sym_ATif] = 258,
        [anon_sym_ATwhile] = 258,
        [anon_sym_LT] = 258,
        [anon_sym_LT_SLASH] = 258,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 258,
        [sym__non_word] = 258,
    },
    [117] = {
        [sym_close_tag] = 312,
        [anon_sym_LT_SLASH] = 314,
    },
    [118] = {
        [sym_tag] = 316,
        [sym_interpolated_expression] = 316,
        [sym_interpolated_if_statement] = 316,
        [sym_interpolated_while_statement] = 316,
        [sym_interpolated_code_block] = 316,
        [sym_open_tag] = 316,
        [sym_close_tag] = 316,
        [sym__word] = 316,
        [aux_sym__markup_repeat1] = 316,
        [anon_sym_AT] = 316,
        [anon_sym_ATif] = 316,
        [anon_sym_ATwhile] = 316,
        [anon_sym_LT] = 316,
        [anon_sym_LT_SLASH] = 316,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 316,
        [sym__non_word] = 316,
    },
    [119] = {
        [sym__tag_name] = 318,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 62,
    },
    [120] = {
        [anon_sym_GT] = 320,
    },
    [121] = {
        [sym_tag] = 322,
        [sym_interpolated_expression] = 322,
        [sym_interpolated_if_statement] = 322,
        [sym_interpolated_while_statement] = 322,
        [sym_interpolated_code_block] = 322,
        [sym_open_tag] = 322,
        [sym_close_tag] = 322,
        [sym__word] = 322,
        [aux_sym__markup_repeat1] = 322,
        [anon_sym_AT] = 322,
        [anon_sym_ATif] = 322,
        [anon_sym_ATwhile] = 322,
        [anon_sym_LT] = 322,
        [anon_sym_LT_SLASH] = 322,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 322,
        [sym__non_word] = 322,
    },
    [122] = {
        [sym_tag] = 316,
        [sym_interpolated_expression] = 316,
        [sym_interpolated_if_statement] = 316,
        [sym_interpolated_while_statement] = 316,
        [sym_interpolated_code_block] = 316,
        [sym_open_tag] = 316,
        [sym__word] = 316,
        [aux_sym__markup_repeat1] = 316,
        [anon_sym_AT] = 316,
        [anon_sym_ATif] = 316,
        [anon_sym_RBRACE] = 316,
        [anon_sym_ATwhile] = 316,
        [anon_sym_LT] = 316,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 316,
        [sym__non_word] = 316,
    },
    [123] = {
        [sym__tag_name] = 324,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 62,
    },
    [124] = {
        [anon_sym_GT] = 326,
    },
    [125] = {
        [sym_tag] = 322,
        [sym_interpolated_expression] = 322,
        [sym_interpolated_if_statement] = 322,
        [sym_interpolated_while_statement] = 322,
        [sym_interpolated_code_block] = 322,
        [sym_open_tag] = 322,
        [sym__word] = 322,
        [aux_sym__markup_repeat1] = 322,
        [anon_sym_AT] = 322,
        [anon_sym_ATif] = 322,
        [anon_sym_RBRACE] = 322,
        [anon_sym_ATwhile] = 322,
        [anon_sym_LT] = 322,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 322,
        [sym__non_word] = 322,
    },
    [126] = {
        [sym_tag] = 146,
        [sym_interpolated_expression] = 146,
        [sym_interpolated_if_statement] = 146,
        [sym_interpolated_while_statement] = 146,
        [sym_interpolated_code_block] = 146,
        [sym_open_tag] = 146,
        [sym__word] = 146,
        [aux_sym__markup_repeat1] = 146,
        [ts_builtin_sym_end] = 146,
        [anon_sym_AT] = 146,
        [anon_sym_ATif] = 146,
        [anon_sym_ATwhile] = 146,
        [anon_sym_LT] = 146,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 146,
        [sym__non_word] = 146,
    },
    [127] = {
        [aux_sym_call_expression_repeat1] = 328,
        [anon_sym_LPAREN] = 216,
        [anon_sym_RPAREN] = 330,
        [anon_sym_PLUS] = 220,
        [anon_sym_DASH] = 220,
        [anon_sym_COMMA] = 222,
        [anon_sym_DOT] = 224,
    },
    [128] = {
        [anon_sym_LPAREN] = 226,
        [anon_sym_RPAREN] = 226,
        [anon_sym_PLUS] = 226,
        [anon_sym_DASH] = 226,
        [anon_sym_DOT] = 226,
    },
    [129] = {
        [anon_sym_RPAREN] = 332,
    },
    [130] = {
        [anon_sym_LPAREN] = 234,
        [anon_sym_RPAREN] = 234,
        [anon_sym_PLUS] = 234,
        [anon_sym_DASH] = 234,
        [anon_sym_DOT] = 234,
    },
    [131] = {
        [anon_sym_LPAREN] = 254,
        [anon_sym_RPAREN] = 254,
        [anon_sym_PLUS] = 254,
        [anon_sym_DASH] = 254,
        [anon_sym_DOT] = 254,
    },
    [132] = {
        [sym__expression] = 334,
        [sym_binary_expression] = 76,
        [sym_call_expression] = 76,
        [sym_member_expression] = 76,
        [sym_identifier] = 76,
        [sym_number] = 76,
    },
    [133] = {
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 336,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_DOT] = 84,
    },
    [134] = {
        [anon_sym_LBRACE] = 338,
    },
    [135] = {
        [sym__markup] = 340,
        [sym_tag] = 106,
        [sym_interpolated_expression] = 106,
        [sym_interpolated_if_statement] = 106,
        [sym_interpolated_while_statement] = 106,
        [sym_interpolated_code_block] = 106,
        [sym_open_tag] = 108,
        [sym__word] = 106,
        [aux_sym__markup_repeat1] = 110,
        [anon_sym_AT] = 112,
        [anon_sym_ATif] = 114,
        [anon_sym_RBRACE] = 12,
        [anon_sym_ATwhile] = 116,
        [anon_sym_LT] = 20,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 118,
        [sym__non_word] = 106,
    },
    [136] = {
        [anon_sym_RBRACE] = 342,
    },
    [137] = {
        [sym_tag] = 158,
        [sym_interpolated_expression] = 158,
        [sym_interpolated_if_statement] = 158,
        [sym_interpolated_while_statement] = 158,
        [sym_interpolated_code_block] = 158,
        [sym_open_tag] = 158,
        [sym__word] = 158,
        [aux_sym__markup_repeat1] = 158,
        [ts_builtin_sym_end] = 158,
        [anon_sym_AT] = 158,
        [anon_sym_ATif] = 158,
        [anon_sym_ATwhile] = 158,
        [anon_sym_LT] = 158,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 158,
        [sym__non_word] = 158,
    },
    [138] = {
        [sym_tag] = 160,
        [sym_interpolated_expression] = 160,
        [sym_interpolated_if_statement] = 160,
        [sym_interpolated_while_statement] = 160,
        [sym_interpolated_code_block] = 160,
        [sym_open_tag] = 160,
        [sym__word] = 160,
        [aux_sym__markup_repeat1] = 160,
        [ts_builtin_sym_end] = 160,
        [anon_sym_AT] = 160,
        [anon_sym_ATif] = 160,
        [anon_sym_ATwhile] = 160,
        [anon_sym_DOT] = 344,
        [anon_sym_LT] = 160,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 160,
        [sym__non_word] = 160,
    },
    [139] = {
        [sym__expression] = 346,
        [sym_binary_expression] = 76,
        [sym_call_expression] = 76,
        [sym_member_expression] = 76,
        [sym_identifier] = 76,
        [sym_number] = 76,
    },
    [140] = {
        [sym__expression] = 166,
        [sym__statement] = 168,
        [sym_expression_statement] = 170,
        [sym_binary_expression] = 172,
        [sym_call_expression] = 172,
        [sym_member_expression] = 172,
        [aux_sym_interpolated_code_block_repeat1] = 348,
        [anon_sym_RBRACE] = 350,
        [sym_identifier] = 172,
        [sym_number] = 172,
    },
    [141] = {
        [sym_identifier] = 352,
    },
    [142] = {
        [sym_tag] = 180,
        [sym_interpolated_expression] = 180,
        [sym_interpolated_if_statement] = 180,
        [sym_interpolated_while_statement] = 180,
        [sym_interpolated_code_block] = 180,
        [sym_open_tag] = 180,
        [sym__word] = 180,
        [aux_sym__markup_repeat1] = 180,
        [ts_builtin_sym_end] = 180,
        [anon_sym_AT] = 180,
        [anon_sym_ATif] = 180,
        [anon_sym_ATwhile] = 180,
        [anon_sym_DOT] = 180,
        [anon_sym_LT] = 180,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 180,
        [sym__non_word] = 180,
    },
    [143] = {
        [anon_sym_RBRACE] = 354,
    },
    [144] = {
        [sym_tag] = 198,
        [sym_interpolated_expression] = 198,
        [sym_interpolated_if_statement] = 198,
        [sym_interpolated_while_statement] = 198,
        [sym_interpolated_code_block] = 198,
        [sym_open_tag] = 198,
        [sym__word] = 198,
        [aux_sym__markup_repeat1] = 198,
        [ts_builtin_sym_end] = 198,
        [anon_sym_AT] = 198,
        [anon_sym_ATif] = 198,
        [anon_sym_ATwhile] = 198,
        [anon_sym_LT] = 198,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 198,
        [sym__non_word] = 198,
    },
    [145] = {
        [sym_tag] = 200,
        [sym_interpolated_expression] = 200,
        [sym_interpolated_if_statement] = 200,
        [sym_interpolated_while_statement] = 200,
        [sym_interpolated_code_block] = 200,
        [sym_open_tag] = 200,
        [sym__word] = 200,
        [aux_sym__markup_repeat1] = 200,
        [ts_builtin_sym_end] = 200,
        [anon_sym_AT] = 200,
        [anon_sym_ATif] = 200,
        [anon_sym_ATwhile] = 200,
        [anon_sym_LT] = 200,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 200,
        [sym__non_word] = 200,
    },
    [146] = {
        [anon_sym_LPAREN] = 78,
        [anon_sym_RPAREN] = 356,
        [anon_sym_PLUS] = 82,
        [anon_sym_DASH] = 82,
        [anon_sym_DOT] = 84,
    },
    [147] = {
        [sym_tag] = 258,
        [sym_interpolated_expression] = 258,
        [sym_interpolated_if_statement] = 258,
        [sym_interpolated_while_statement] = 258,
        [sym_interpolated_code_block] = 258,
        [sym_open_tag] = 258,
        [sym__word] = 258,
        [aux_sym__markup_repeat1] = 258,
        [ts_builtin_sym_end] = 258,
        [anon_sym_AT] = 258,
        [anon_sym_ATif] = 258,
        [anon_sym_ATwhile] = 258,
        [anon_sym_LT] = 258,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 258,
        [sym__non_word] = 258,
    },
    [148] = {
        [sym_close_tag] = 358,
        [anon_sym_LT_SLASH] = 360,
    },
    [149] = {
        [sym_tag] = 316,
        [sym_interpolated_expression] = 316,
        [sym_interpolated_if_statement] = 316,
        [sym_interpolated_while_statement] = 316,
        [sym_interpolated_code_block] = 316,
        [sym_open_tag] = 316,
        [sym__word] = 316,
        [aux_sym__markup_repeat1] = 316,
        [ts_builtin_sym_end] = 316,
        [anon_sym_AT] = 316,
        [anon_sym_ATif] = 316,
        [anon_sym_ATwhile] = 316,
        [anon_sym_LT] = 316,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 316,
        [sym__non_word] = 316,
    },
    [150] = {
        [sym__tag_name] = 362,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 62,
    },
    [151] = {
        [anon_sym_GT] = 364,
    },
    [152] = {
        [sym_tag] = 322,
        [sym_interpolated_expression] = 322,
        [sym_interpolated_if_statement] = 322,
        [sym_interpolated_while_statement] = 322,
        [sym_interpolated_code_block] = 322,
        [sym_open_tag] = 322,
        [sym__word] = 322,
        [aux_sym__markup_repeat1] = 322,
        [ts_builtin_sym_end] = 322,
        [anon_sym_AT] = 322,
        [anon_sym_ATif] = 322,
        [anon_sym_ATwhile] = 322,
        [anon_sym_LT] = 322,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 322,
        [sym__non_word] = 322,
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
    [32] = {.count = 1}, SHIFT(148, 0),
    [34] = {.count = 1}, SHIFT(87, 0),
    [36] = {.count = 1}, SHIFT(88, 0),
    [38] = {.count = 1}, SHIFT(89, 0),
    [40] = {.count = 1}, SHIFT(90, 0),
    [42] = {.count = 1}, SHIFT(91, 0),
    [44] = {.count = 1}, SHIFT(92, 0),
    [46] = {.count = 1}, SHIFT(93, 0),
    [48] = {.count = 1}, REDUCE(sym__markup, 1, 0),
    [50] = {.count = 1}, SHIFT(138, 0),
    [52] = {.count = 1}, SHIFT(139, 0),
    [54] = {.count = 1}, SHIFT(140, 0),
    [56] = {.count = 1}, SHIFT(132, 0),
    [58] = {.count = 1}, SHIFT(15, 0),
    [60] = {.count = 1}, SHIFT(12, 0),
    [62] = {.count = 1}, SHIFT(13, 0),
    [64] = {.count = 1}, REDUCE(sym__word, 1, 0),
    [66] = {.count = 1}, REDUCE(aux_sym__markup_repeat1, 2, 0),
    [68] = {.count = 1}, SHIFT(14, 0),
    [70] = {.count = 1}, REDUCE(sym__tag_name, 1, 0),
    [72] = {.count = 1}, REDUCE(sym_open_tag, 3, 0),
    [74] = {.count = 1}, SHIFT(16, 0),
    [76] = {.count = 1}, SHIFT(17, 0),
    [78] = {.count = 1}, SHIFT(18, 0),
    [80] = {.count = 1}, SHIFT(19, 0),
    [82] = {.count = 1}, SHIFT(20, 0),
    [84] = {.count = 1}, SHIFT(21, 0),
    [86] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [88] = {.count = 1}, SHIFT(127, 0),
    [90] = {.count = 1}, SHIFT(66, 0),
    [92] = {.count = 1}, SHIFT(128, 0),
    [94] = {.count = 1}, SHIFT(24, 0),
    [96] = {.count = 1}, SHIFT(23, 0),
    [98] = {.count = 1}, SHIFT(22, 0),
    [100] = {.count = 1}, REDUCE(sym_member_expression, 3, 0),
    [102] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [104] = {.count = 1}, SHIFT(25, 0),
    [106] = {.count = 1}, SHIFT(26, 0),
    [108] = {.count = 1}, SHIFT(27, 0),
    [110] = {.count = 1}, SHIFT(28, 0),
    [112] = {.count = 1}, SHIFT(29, 0),
    [114] = {.count = 1}, SHIFT(30, 0),
    [116] = {.count = 1}, SHIFT(31, 0),
    [118] = {.count = 1}, SHIFT(32, 0),
    [120] = {.count = 1}, SHIFT(126, 0),
    [122] = {.count = 1}, SHIFT(33, 0),
    [124] = {.count = 1}, SHIFT(86, 0),
    [126] = {.count = 1}, SHIFT(46, 0),
    [128] = {.count = 1}, SHIFT(47, 0),
    [130] = {.count = 1}, SHIFT(48, 0),
    [132] = {.count = 1}, SHIFT(40, 0),
    [134] = {.count = 1}, SHIFT(34, 0),
    [136] = {.count = 1}, SHIFT(35, 0),
    [138] = {.count = 1}, SHIFT(36, 0),
    [140] = {.count = 1}, SHIFT(37, 0),
    [142] = {.count = 1}, SHIFT(38, 0),
    [144] = {.count = 1}, SHIFT(39, 0),
    [146] = {.count = 1}, REDUCE(sym_interpolated_while_statement, 7, 0),
    [148] = {.count = 1}, SHIFT(41, 0),
    [150] = {.count = 1}, SHIFT(42, 0),
    [152] = {.count = 1}, SHIFT(43, 0),
    [154] = {.count = 1}, SHIFT(44, 0),
    [156] = {.count = 1}, SHIFT(45, 0),
    [158] = {.count = 1}, REDUCE(sym_interpolated_if_statement, 7, 0),
    [160] = {.count = 1}, REDUCE(sym_interpolated_expression, 2, 0),
    [162] = {.count = 1}, SHIFT(49, 0),
    [164] = {.count = 1}, SHIFT(84, 0),
    [166] = {.count = 1}, SHIFT(51, 0),
    [168] = {.count = 1}, SHIFT(52, 0),
    [170] = {.count = 1}, SHIFT(53, 0),
    [172] = {.count = 1}, SHIFT(54, 0),
    [174] = {.count = 1}, SHIFT(55, 0),
    [176] = {.count = 1}, SHIFT(56, 0),
    [178] = {.count = 1}, SHIFT(50, 0),
    [180] = {.count = 1}, REDUCE(sym_simple_member_expression, 3, 0),
    [182] = {.count = 1}, SHIFT(59, 0),
    [184] = {.count = 1}, SHIFT(60, 0),
    [186] = {.count = 1}, SHIFT(61, 0),
    [188] = {.count = 1}, SHIFT(62, 0),
    [190] = {.count = 1}, SHIFT(58, 0),
    [192] = {.count = 1}, REDUCE(aux_sym_interpolated_code_block_repeat1, 1, 0),
    [194] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [196] = {.count = 1}, SHIFT(57, 0),
    [198] = {.count = 1}, REDUCE(sym_interpolated_code_block, 3, 0),
    [200] = {.count = 1}, REDUCE(sym_interpolated_code_block, 4, 0),
    [202] = {.count = 1}, REDUCE(aux_sym_interpolated_code_block_repeat1, 2, 0),
    [204] = {.count = 1}, SHIFT(65, 0),
    [206] = {.count = 1}, SHIFT(67, 0),
    [208] = {.count = 1}, REDUCE(sym_expression_statement, 2, 0),
    [210] = {.count = 1}, SHIFT(64, 0),
    [212] = {.count = 1}, SHIFT(63, 0),
    [214] = {.count = 1}, SHIFT(68, 0),
    [216] = {.count = 1}, SHIFT(69, 0),
    [218] = {.count = 1}, SHIFT(70, 0),
    [220] = {.count = 1}, SHIFT(71, 0),
    [222] = {.count = 1}, SHIFT(72, 0),
    [224] = {.count = 1}, SHIFT(73, 0),
    [226] = {.count = 1}, REDUCE(sym_call_expression, 3, 0),
    [228] = {.count = 1}, SHIFT(83, 0),
    [230] = {.count = 1}, SHIFT(78, 0),
    [232] = {.count = 1}, SHIFT(79, 0),
    [234] = {.count = 1}, REDUCE(sym_call_expression, 4, 0),
    [236] = {.count = 1}, SHIFT(77, 0),
    [238] = {.count = 1}, SHIFT(75, 0),
    [240] = {.count = 1}, SHIFT(74, 0),
    [242] = {.count = 1}, SHIFT(76, 0),
    [244] = {.count = 1}, REDUCE(aux_sym_call_expression_repeat1, 2, 0),
    [246] = {.count = 1}, REDUCE(aux_sym_call_expression_repeat1, 3, 0),
    [248] = {.count = 1}, SHIFT(80, 0),
    [250] = {.count = 1}, SHIFT(81, 0),
    [252] = {.count = 1}, SHIFT(82, 0),
    [254] = {.count = 1}, REDUCE(sym_call_expression, 5, 0),
    [256] = {.count = 1}, SHIFT(85, 0),
    [258] = {.count = 1}, REDUCE(sym_interpolated_expression, 4, 0),
    [260] = {.count = 1}, SHIFT(122, 0),
    [262] = {.count = 1}, SHIFT(123, 0),
    [264] = {.count = 1}, SHIFT(94, 0),
    [266] = {.count = 1}, SHIFT(117, 0),
    [268] = {.count = 1}, SHIFT(107, 0),
    [270] = {.count = 1}, SHIFT(108, 0),
    [272] = {.count = 1}, SHIFT(109, 0),
    [274] = {.count = 1}, SHIFT(101, 0),
    [276] = {.count = 1}, SHIFT(95, 0),
    [278] = {.count = 1}, SHIFT(96, 0),
    [280] = {.count = 1}, SHIFT(97, 0),
    [282] = {.count = 1}, SHIFT(98, 0),
    [284] = {.count = 1}, SHIFT(99, 0),
    [286] = {.count = 1}, SHIFT(100, 0),
    [288] = {.count = 1}, SHIFT(102, 0),
    [290] = {.count = 1}, SHIFT(103, 0),
    [292] = {.count = 1}, SHIFT(104, 0),
    [294] = {.count = 1}, SHIFT(105, 0),
    [296] = {.count = 1}, SHIFT(106, 0),
    [298] = {.count = 1}, SHIFT(110, 0),
    [300] = {.count = 1}, SHIFT(115, 0),
    [302] = {.count = 1}, SHIFT(112, 0),
    [304] = {.count = 1}, SHIFT(113, 0),
    [306] = {.count = 1}, SHIFT(111, 0),
    [308] = {.count = 1}, SHIFT(114, 0),
    [310] = {.count = 1}, SHIFT(116, 0),
    [312] = {.count = 1}, SHIFT(118, 0),
    [314] = {.count = 1}, SHIFT(119, 0),
    [316] = {.count = 1}, REDUCE(sym_tag, 3, 0),
    [318] = {.count = 1}, SHIFT(120, 0),
    [320] = {.count = 1}, SHIFT(121, 0),
    [322] = {.count = 1}, REDUCE(sym_close_tag, 3, 0),
    [324] = {.count = 1}, SHIFT(124, 0),
    [326] = {.count = 1}, SHIFT(125, 0),
    [328] = {.count = 1}, SHIFT(129, 0),
    [330] = {.count = 1}, SHIFT(130, 0),
    [332] = {.count = 1}, SHIFT(131, 0),
    [334] = {.count = 1}, SHIFT(133, 0),
    [336] = {.count = 1}, SHIFT(134, 0),
    [338] = {.count = 1}, SHIFT(135, 0),
    [340] = {.count = 1}, SHIFT(136, 0),
    [342] = {.count = 1}, SHIFT(137, 0),
    [344] = {.count = 1}, SHIFT(141, 0),
    [346] = {.count = 1}, SHIFT(146, 0),
    [348] = {.count = 1}, SHIFT(143, 0),
    [350] = {.count = 1}, SHIFT(144, 0),
    [352] = {.count = 1}, SHIFT(142, 0),
    [354] = {.count = 1}, SHIFT(145, 0),
    [356] = {.count = 1}, SHIFT(147, 0),
    [358] = {.count = 1}, SHIFT(149, 0),
    [360] = {.count = 1}, SHIFT(150, 0),
    [362] = {.count = 1}, SHIFT(151, 0),
    [364] = {.count = 1}, SHIFT(152, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_razor);
