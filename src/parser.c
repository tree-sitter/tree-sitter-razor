#include "tree_sitter/parser.h"

#define STATE_COUNT 210
#define SYMBOL_COUNT 41

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
    [sym_document] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__markup] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym_tag] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_interpolated_expression] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_interpolated_if_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_interpolated_while_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_interpolated_code_block] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__expression] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym__statement] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym_expression_statement] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_binary_expression] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_call_expression] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_member_expression] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_simple_member_expression] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_open_tag] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_close_tag] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__word] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym__tag_name] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym__markup_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_interpolated_code_block_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_call_expression_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_AT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LPAREN] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RPAREN] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_ATif] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_ATwhile] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_PLUS] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DASH] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DOT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_GT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LT_SLASH] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym_identifier] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_number] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym__non_word] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
};

static bool ts_lex(TSLexer *lexer, TSStateId state, bool error_mode) {
    START_LEXER();
    switch (state) {
        case 0:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(0);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(3);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == '-')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(9);
            if (lookahead == '<')
                ADVANCE(10);
            if (lookahead == '>')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '{')
                ADVANCE(23);
            if (lookahead == '}')
                ADVANCE(24);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 3:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 4:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 5:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 6:
            ACCEPT_TOKEN(anon_sym_DASH);
        case 7:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 8:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            ACCEPT_TOKEN(sym_number);
        case 9:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 10:
            if (lookahead == '/')
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_LT);
        case 11:
            ACCEPT_TOKEN(anon_sym_LT_SLASH);
        case 12:
            ACCEPT_TOKEN(anon_sym_GT);
        case 13:
            if (lookahead == 'i')
                ADVANCE(14);
            if (lookahead == 'w')
                ADVANCE(16);
            ACCEPT_TOKEN(anon_sym_AT);
        case 14:
            if (lookahead == 'f')
                ADVANCE(15);
            LEX_ERROR();
        case 15:
            ACCEPT_TOKEN(anon_sym_ATif);
        case 16:
            if (lookahead == 'h')
                ADVANCE(17);
            LEX_ERROR();
        case 17:
            if (lookahead == 'i')
                ADVANCE(18);
            LEX_ERROR();
        case 18:
            if (lookahead == 'l')
                ADVANCE(19);
            LEX_ERROR();
        case 19:
            if (lookahead == 'e')
                ADVANCE(20);
            LEX_ERROR();
        case 20:
            ACCEPT_TOKEN(anon_sym_ATwhile);
        case 21:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(22);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier);
        case 23:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 24:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 25:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '<')
                ADVANCE(27);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
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
        case 26:
            ACCEPT_TOKEN(sym__non_word);
        case 27:
            ACCEPT_TOKEN(anon_sym_LT);
        case 28:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            ACCEPT_TOKEN(aux_sym_SLASH_BSLASHa_PLUS_SLASH);
        case 29:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(29);
            LEX_ERROR();
        case 30:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '<')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
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
        case 31:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(31);
            if (lookahead == '(')
                ADVANCE(2);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            if (lookahead == '{')
                ADVANCE(23);
            LEX_ERROR();
        case 32:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(32);
            if (lookahead == '(')
                ADVANCE(2);
            LEX_ERROR();
        case 33:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(33);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            LEX_ERROR();
        case 34:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(34);
            if (lookahead == '>')
                ADVANCE(12);
            LEX_ERROR();
        case 35:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '<')
                ADVANCE(27);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
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
        case 36:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(36);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            LEX_ERROR();
        case 37:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(37);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(3);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == '-')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
            LEX_ERROR();
        case 38:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(38);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(3);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == '-')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
            LEX_ERROR();
        case 39:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(39);
            if (lookahead == ')')
                ADVANCE(3);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            LEX_ERROR();
        case 40:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(40);
            if (lookahead == '{')
                ADVANCE(23);
            LEX_ERROR();
        case 41:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(41);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            LEX_ERROR();
        case 42:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '<')
                ADVANCE(27);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(24);
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
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(43);
            if (lookahead == '}')
                ADVANCE(24);
            LEX_ERROR();
        case 44:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '<')
                ADVANCE(27);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(24);
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
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(45);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(22);
            if (lookahead == '}')
                ADVANCE(24);
            LEX_ERROR();
        case 46:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(46);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == '-')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            LEX_ERROR();
        case 47:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(47);
            if (lookahead == ')')
                ADVANCE(3);
            if (lookahead == ',')
                ADVANCE(5);
            LEX_ERROR();
        case 48:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(48);
            if (lookahead == '<')
                ADVANCE(49);
            LEX_ERROR();
        case 49:
            if (lookahead == '/')
                ADVANCE(11);
            LEX_ERROR();
        case 50:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '<')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
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
        case 51:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '<')
                ADVANCE(27);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
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
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(3);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == '-')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (lookahead == '<')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            if (lookahead == '{')
                ADVANCE(23);
            if (lookahead == '}')
                ADVANCE(24);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '(') ||
                (lookahead == ')') ||
                ('+' <= lookahead && lookahead <= '.') ||
                (lookahead == ';') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= '{') ||
                (lookahead == '}')))
                ADVANCE(26);
            LEX_ERROR();
        case 53:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(8);
            if (lookahead == '<')
                ADVANCE(27);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '}')
                ADVANCE(24);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z') ||
                (lookahead == '}')))
                ADVANCE(26);
            LEX_ERROR();
        case 54:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '<')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(24);
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
        case 55:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(3);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == '-')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            if (lookahead == '<')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(24);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '(') ||
                (lookahead == ')') ||
                ('+' <= lookahead && lookahead <= '.') ||
                (lookahead == ';') ||
                (lookahead == '<') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z') ||
                (lookahead == '}')))
                ADVANCE(26);
            LEX_ERROR();
        case 56:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(56);
            if (lookahead == '(')
                ADVANCE(2);
            if (lookahead == ')')
                ADVANCE(3);
            if (lookahead == '+')
                ADVANCE(4);
            if (lookahead == ',')
                ADVANCE(5);
            if (lookahead == '-')
                ADVANCE(6);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == ';')
                ADVANCE(9);
            LEX_ERROR();
        case 57:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '<')
                ADVANCE(10);
            if (lookahead == '>')
                ADVANCE(12);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(24);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '<') ||
                (lookahead == '>') ||
                ('@' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z') ||
                (lookahead == '}')))
                ADVANCE(26);
            LEX_ERROR();
        case 58:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(58);
            if (lookahead == '<')
                ADVANCE(49);
            if (lookahead == '}')
                ADVANCE(24);
            LEX_ERROR();
        case 59:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(26);
            if (lookahead == '.')
                ADVANCE(7);
            if (lookahead == '<')
                ADVANCE(10);
            if (lookahead == '@')
                ADVANCE(13);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(28);
            if (lookahead == '}')
                ADVANCE(24);
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
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 25,
    [2] = 29,
    [3] = 29,
    [4] = 25,
    [5] = 30,
    [6] = 25,
    [7] = 31,
    [8] = 32,
    [9] = 32,
    [10] = 33,
    [11] = 25,
    [12] = 34,
    [13] = 34,
    [14] = 35,
    [15] = 36,
    [16] = 37,
    [17] = 38,
    [18] = 39,
    [19] = 40,
    [20] = 36,
    [21] = 41,
    [22] = 38,
    [23] = 38,
    [24] = 42,
    [25] = 43,
    [26] = 42,
    [27] = 30,
    [28] = 42,
    [29] = 31,
    [30] = 32,
    [31] = 32,
    [32] = 42,
    [33] = 36,
    [34] = 37,
    [35] = 40,
    [36] = 42,
    [37] = 43,
    [38] = 42,
    [39] = 36,
    [40] = 37,
    [41] = 40,
    [42] = 42,
    [43] = 43,
    [44] = 42,
    [45] = 44,
    [46] = 36,
    [47] = 45,
    [48] = 41,
    [49] = 44,
    [50] = 46,
    [51] = 45,
    [52] = 45,
    [53] = 46,
    [54] = 45,
    [55] = 42,
    [56] = 45,
    [57] = 42,
    [58] = 39,
    [59] = 45,
    [60] = 36,
    [61] = 41,
    [62] = 46,
    [63] = 46,
    [64] = 38,
    [65] = 46,
    [66] = 47,
    [67] = 46,
    [68] = 36,
    [69] = 38,
    [70] = 38,
    [71] = 38,
    [72] = 47,
    [73] = 38,
    [74] = 38,
    [75] = 36,
    [76] = 38,
    [77] = 46,
    [78] = 37,
    [79] = 42,
    [80] = 42,
    [81] = 48,
    [82] = 30,
    [83] = 30,
    [84] = 30,
    [85] = 31,
    [86] = 32,
    [87] = 32,
    [88] = 30,
    [89] = 36,
    [90] = 37,
    [91] = 40,
    [92] = 42,
    [93] = 43,
    [94] = 30,
    [95] = 36,
    [96] = 37,
    [97] = 40,
    [98] = 42,
    [99] = 43,
    [100] = 30,
    [101] = 50,
    [102] = 36,
    [103] = 45,
    [104] = 41,
    [105] = 50,
    [106] = 45,
    [107] = 30,
    [108] = 30,
    [109] = 37,
    [110] = 30,
    [111] = 30,
    [112] = 48,
    [113] = 30,
    [114] = 33,
    [115] = 34,
    [116] = 30,
    [117] = 42,
    [118] = 33,
    [119] = 34,
    [120] = 42,
    [121] = 25,
    [122] = 36,
    [123] = 37,
    [124] = 40,
    [125] = 42,
    [126] = 43,
    [127] = 25,
    [128] = 51,
    [129] = 36,
    [130] = 45,
    [131] = 41,
    [132] = 51,
    [133] = 45,
    [134] = 25,
    [135] = 25,
    [136] = 37,
    [137] = 25,
    [138] = 25,
    [139] = 48,
    [140] = 25,
    [141] = 33,
    [142] = 34,
    [143] = 25,
    [144] = 31,
    [145] = 39,
    [146] = 52,
    [147] = 32,
    [148] = 53,
    [149] = 54,
    [150] = 32,
    [151] = 36,
    [152] = 36,
    [153] = 41,
    [154] = 54,
    [155] = 33,
    [156] = 55,
    [157] = 56,
    [158] = 57,
    [159] = 58,
    [160] = 54,
    [161] = 56,
    [162] = 45,
    [163] = 59,
    [164] = 30,
    [165] = 54,
    [166] = 34,
    [167] = 54,
    [168] = 45,
    [169] = 47,
    [170] = 56,
    [171] = 54,
    [172] = 54,
    [173] = 54,
    [174] = 48,
    [175] = 41,
    [176] = 59,
    [177] = 39,
    [178] = 52,
    [179] = 41,
    [180] = 56,
    [181] = 42,
    [182] = 43,
    [183] = 54,
    [184] = 38,
    [185] = 56,
    [186] = 56,
    [187] = 34,
    [188] = 54,
    [189] = 55,
    [190] = 38,
    [191] = 56,
    [192] = 36,
    [193] = 37,
    [194] = 40,
    [195] = 42,
    [196] = 43,
    [197] = 54,
    [198] = 54,
    [199] = 36,
    [200] = 37,
    [201] = 40,
    [202] = 42,
    [203] = 43,
    [204] = 54,
    [205] = 38,
    [206] = 36,
    [207] = 45,
    [208] = 37,
    [209] = 54,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_document] = 1,
        [sym__markup] = 3,
        [sym_tag] = 5,
        [sym_interpolated_expression] = 5,
        [sym_interpolated_if_statement] = 5,
        [sym_interpolated_while_statement] = 5,
        [sym_interpolated_code_block] = 5,
        [sym__expression] = 7,
        [sym__statement] = 9,
        [sym_expression_statement] = 11,
        [sym_binary_expression] = 13,
        [sym_call_expression] = 13,
        [sym_member_expression] = 13,
        [sym_simple_member_expression] = 15,
        [sym_open_tag] = 17,
        [sym_close_tag] = 19,
        [sym__word] = 5,
        [sym__tag_name] = 21,
        [aux_sym__markup_repeat1] = 23,
        [aux_sym_interpolated_code_block_repeat1] = 25,
        [aux_sym_call_expression_repeat1] = 27,
        [ts_builtin_sym_end] = 29,
        [anon_sym_AT] = 31,
        [anon_sym_LPAREN] = 33,
        [anon_sym_RPAREN] = 35,
        [anon_sym_ATif] = 37,
        [anon_sym_LBRACE] = 39,
        [anon_sym_RBRACE] = 41,
        [anon_sym_ATwhile] = 43,
        [anon_sym_SEMI] = 45,
        [anon_sym_PLUS] = 47,
        [anon_sym_DASH] = 47,
        [anon_sym_COMMA] = 49,
        [anon_sym_DOT] = 51,
        [anon_sym_LT] = 53,
        [anon_sym_GT] = 55,
        [anon_sym_LT_SLASH] = 57,
        [sym_identifier] = 59,
        [sym_number] = 61,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 63,
    },
    [1] = {
        [sym_document] = 65,
        [sym__markup] = 67,
        [sym_tag] = 69,
        [sym_interpolated_expression] = 69,
        [sym_interpolated_if_statement] = 69,
        [sym_interpolated_while_statement] = 69,
        [sym_interpolated_code_block] = 69,
        [sym_open_tag] = 71,
        [sym__word] = 69,
        [aux_sym__markup_repeat1] = 73,
        [ts_builtin_sym_end] = 75,
        [anon_sym_AT] = 77,
        [anon_sym_ATif] = 79,
        [anon_sym_ATwhile] = 81,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 85,
        [sym__non_word] = 87,
    },
    [2] = {
        [ts_builtin_sym_end] = 89,
    },
    [3] = {
        [ts_builtin_sym_end] = 91,
    },
    [4] = {
        [sym_tag] = 93,
        [sym_interpolated_expression] = 93,
        [sym_interpolated_if_statement] = 93,
        [sym_interpolated_while_statement] = 93,
        [sym_interpolated_code_block] = 93,
        [sym_open_tag] = 93,
        [sym__word] = 93,
        [ts_builtin_sym_end] = 93,
        [anon_sym_AT] = 95,
        [anon_sym_ATif] = 93,
        [anon_sym_ATwhile] = 93,
        [anon_sym_LT] = 93,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 95,
        [sym__non_word] = 97,
    },
    [5] = {
        [sym__markup] = 99,
        [sym_tag] = 101,
        [sym_interpolated_expression] = 101,
        [sym_interpolated_if_statement] = 101,
        [sym_interpolated_while_statement] = 101,
        [sym_interpolated_code_block] = 101,
        [sym_open_tag] = 103,
        [sym_close_tag] = 75,
        [sym__word] = 101,
        [aux_sym__markup_repeat1] = 105,
        [anon_sym_AT] = 107,
        [anon_sym_ATif] = 109,
        [anon_sym_ATwhile] = 111,
        [anon_sym_LT] = 113,
        [anon_sym_LT_SLASH] = 75,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 115,
        [sym__non_word] = 117,
    },
    [6] = {
        [sym_tag] = 119,
        [sym_interpolated_expression] = 119,
        [sym_interpolated_if_statement] = 119,
        [sym_interpolated_while_statement] = 119,
        [sym_interpolated_code_block] = 119,
        [sym_open_tag] = 71,
        [sym__word] = 119,
        [ts_builtin_sym_end] = 121,
        [anon_sym_AT] = 77,
        [anon_sym_ATif] = 79,
        [anon_sym_ATwhile] = 81,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 85,
        [sym__non_word] = 123,
    },
    [7] = {
        [sym_simple_member_expression] = 125,
        [anon_sym_LPAREN] = 127,
        [anon_sym_LBRACE] = 129,
        [sym_identifier] = 131,
    },
    [8] = {
        [anon_sym_LPAREN] = 133,
    },
    [9] = {
        [anon_sym_LPAREN] = 135,
    },
    [10] = {
        [sym__tag_name] = 137,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 139,
    },
    [11] = {
        [sym_tag] = 141,
        [sym_interpolated_expression] = 141,
        [sym_interpolated_if_statement] = 141,
        [sym_interpolated_while_statement] = 141,
        [sym_interpolated_code_block] = 141,
        [sym_open_tag] = 141,
        [sym__word] = 141,
        [ts_builtin_sym_end] = 141,
        [anon_sym_AT] = 143,
        [anon_sym_ATif] = 141,
        [anon_sym_ATwhile] = 141,
        [anon_sym_LT] = 141,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 143,
        [sym__non_word] = 145,
    },
    [12] = {
        [anon_sym_GT] = 147,
    },
    [13] = {
        [anon_sym_GT] = 149,
    },
    [14] = {
        [sym__markup] = 151,
        [sym_tag] = 151,
        [sym_interpolated_expression] = 151,
        [sym_interpolated_if_statement] = 151,
        [sym_interpolated_while_statement] = 151,
        [sym_interpolated_code_block] = 151,
        [sym_open_tag] = 151,
        [sym__word] = 151,
        [aux_sym__markup_repeat1] = 151,
        [anon_sym_AT] = 153,
        [anon_sym_ATif] = 151,
        [anon_sym_ATwhile] = 151,
        [anon_sym_LT] = 151,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 153,
        [sym__non_word] = 155,
    },
    [15] = {
        [sym__expression] = 157,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [16] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 165,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [17] = {
        [aux_sym_call_expression_repeat1] = 171,
        [anon_sym_LPAREN] = 171,
        [anon_sym_RPAREN] = 171,
        [anon_sym_PLUS] = 171,
        [anon_sym_DASH] = 171,
        [anon_sym_COMMA] = 171,
        [anon_sym_DOT] = 171,
    },
    [18] = {
        [sym__expression] = 173,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [anon_sym_RPAREN] = 175,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [19] = {
        [anon_sym_LBRACE] = 177,
    },
    [20] = {
        [sym__expression] = 179,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [21] = {
        [sym_identifier] = 181,
    },
    [22] = {
        [aux_sym_call_expression_repeat1] = 183,
        [anon_sym_LPAREN] = 183,
        [anon_sym_RPAREN] = 183,
        [anon_sym_PLUS] = 183,
        [anon_sym_DASH] = 183,
        [anon_sym_COMMA] = 183,
        [anon_sym_DOT] = 183,
    },
    [23] = {
        [aux_sym_call_expression_repeat1] = 185,
        [anon_sym_LPAREN] = 185,
        [anon_sym_RPAREN] = 185,
        [anon_sym_PLUS] = 185,
        [anon_sym_DASH] = 185,
        [anon_sym_COMMA] = 185,
        [anon_sym_DOT] = 185,
    },
    [24] = {
        [sym__markup] = 187,
        [sym_tag] = 189,
        [sym_interpolated_expression] = 189,
        [sym_interpolated_if_statement] = 189,
        [sym_interpolated_while_statement] = 189,
        [sym_interpolated_code_block] = 189,
        [sym_open_tag] = 191,
        [sym__word] = 189,
        [aux_sym__markup_repeat1] = 193,
        [anon_sym_AT] = 195,
        [anon_sym_ATif] = 197,
        [anon_sym_RBRACE] = 75,
        [anon_sym_ATwhile] = 199,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 201,
        [sym__non_word] = 203,
    },
    [25] = {
        [anon_sym_RBRACE] = 205,
    },
    [26] = {
        [sym_tag] = 93,
        [sym_interpolated_expression] = 93,
        [sym_interpolated_if_statement] = 93,
        [sym_interpolated_while_statement] = 93,
        [sym_interpolated_code_block] = 93,
        [sym_open_tag] = 93,
        [sym__word] = 93,
        [anon_sym_AT] = 95,
        [anon_sym_ATif] = 93,
        [anon_sym_RBRACE] = 93,
        [anon_sym_ATwhile] = 93,
        [anon_sym_LT] = 93,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 95,
        [sym__non_word] = 97,
    },
    [27] = {
        [sym__markup] = 207,
        [sym_tag] = 101,
        [sym_interpolated_expression] = 101,
        [sym_interpolated_if_statement] = 101,
        [sym_interpolated_while_statement] = 101,
        [sym_interpolated_code_block] = 101,
        [sym_open_tag] = 103,
        [sym_close_tag] = 75,
        [sym__word] = 101,
        [aux_sym__markup_repeat1] = 105,
        [anon_sym_AT] = 107,
        [anon_sym_ATif] = 109,
        [anon_sym_ATwhile] = 111,
        [anon_sym_LT] = 113,
        [anon_sym_LT_SLASH] = 75,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 115,
        [sym__non_word] = 117,
    },
    [28] = {
        [sym_tag] = 209,
        [sym_interpolated_expression] = 209,
        [sym_interpolated_if_statement] = 209,
        [sym_interpolated_while_statement] = 209,
        [sym_interpolated_code_block] = 209,
        [sym_open_tag] = 191,
        [sym__word] = 209,
        [anon_sym_AT] = 195,
        [anon_sym_ATif] = 197,
        [anon_sym_RBRACE] = 121,
        [anon_sym_ATwhile] = 199,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 201,
        [sym__non_word] = 211,
    },
    [29] = {
        [sym_simple_member_expression] = 213,
        [anon_sym_LPAREN] = 215,
        [anon_sym_LBRACE] = 217,
        [sym_identifier] = 219,
    },
    [30] = {
        [anon_sym_LPAREN] = 221,
    },
    [31] = {
        [anon_sym_LPAREN] = 223,
    },
    [32] = {
        [sym_tag] = 141,
        [sym_interpolated_expression] = 141,
        [sym_interpolated_if_statement] = 141,
        [sym_interpolated_while_statement] = 141,
        [sym_interpolated_code_block] = 141,
        [sym_open_tag] = 141,
        [sym__word] = 141,
        [anon_sym_AT] = 143,
        [anon_sym_ATif] = 141,
        [anon_sym_RBRACE] = 141,
        [anon_sym_ATwhile] = 141,
        [anon_sym_LT] = 141,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 143,
        [sym__non_word] = 145,
    },
    [33] = {
        [sym__expression] = 225,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [34] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 227,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [35] = {
        [anon_sym_LBRACE] = 229,
    },
    [36] = {
        [sym__markup] = 231,
        [sym_tag] = 189,
        [sym_interpolated_expression] = 189,
        [sym_interpolated_if_statement] = 189,
        [sym_interpolated_while_statement] = 189,
        [sym_interpolated_code_block] = 189,
        [sym_open_tag] = 191,
        [sym__word] = 189,
        [aux_sym__markup_repeat1] = 193,
        [anon_sym_AT] = 195,
        [anon_sym_ATif] = 197,
        [anon_sym_RBRACE] = 75,
        [anon_sym_ATwhile] = 199,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 201,
        [sym__non_word] = 203,
    },
    [37] = {
        [anon_sym_RBRACE] = 233,
    },
    [38] = {
        [sym_tag] = 235,
        [sym_interpolated_expression] = 235,
        [sym_interpolated_if_statement] = 235,
        [sym_interpolated_while_statement] = 235,
        [sym_interpolated_code_block] = 235,
        [sym_open_tag] = 235,
        [sym__word] = 235,
        [anon_sym_AT] = 237,
        [anon_sym_ATif] = 235,
        [anon_sym_RBRACE] = 235,
        [anon_sym_ATwhile] = 235,
        [anon_sym_LT] = 235,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 237,
        [sym__non_word] = 239,
    },
    [39] = {
        [sym__expression] = 241,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [40] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 243,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [41] = {
        [anon_sym_LBRACE] = 245,
    },
    [42] = {
        [sym__markup] = 247,
        [sym_tag] = 189,
        [sym_interpolated_expression] = 189,
        [sym_interpolated_if_statement] = 189,
        [sym_interpolated_while_statement] = 189,
        [sym_interpolated_code_block] = 189,
        [sym_open_tag] = 191,
        [sym__word] = 189,
        [aux_sym__markup_repeat1] = 193,
        [anon_sym_AT] = 195,
        [anon_sym_ATif] = 197,
        [anon_sym_RBRACE] = 75,
        [anon_sym_ATwhile] = 199,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 201,
        [sym__non_word] = 203,
    },
    [43] = {
        [anon_sym_RBRACE] = 249,
    },
    [44] = {
        [sym_tag] = 251,
        [sym_interpolated_expression] = 251,
        [sym_interpolated_if_statement] = 251,
        [sym_interpolated_while_statement] = 251,
        [sym_interpolated_code_block] = 251,
        [sym_open_tag] = 251,
        [sym__word] = 251,
        [anon_sym_AT] = 253,
        [anon_sym_ATif] = 251,
        [anon_sym_RBRACE] = 251,
        [anon_sym_ATwhile] = 251,
        [anon_sym_LT] = 251,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 253,
        [sym__non_word] = 255,
    },
    [45] = {
        [sym_tag] = 257,
        [sym_interpolated_expression] = 257,
        [sym_interpolated_if_statement] = 257,
        [sym_interpolated_while_statement] = 257,
        [sym_interpolated_code_block] = 257,
        [sym_open_tag] = 257,
        [sym__word] = 257,
        [anon_sym_AT] = 259,
        [anon_sym_ATif] = 257,
        [anon_sym_RBRACE] = 257,
        [anon_sym_ATwhile] = 257,
        [anon_sym_DOT] = 261,
        [anon_sym_LT] = 257,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 259,
        [sym__non_word] = 263,
    },
    [46] = {
        [sym__expression] = 265,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [47] = {
        [sym__expression] = 267,
        [sym__statement] = 269,
        [sym_expression_statement] = 271,
        [sym_binary_expression] = 273,
        [sym_call_expression] = 273,
        [sym_member_expression] = 273,
        [aux_sym_interpolated_code_block_repeat1] = 275,
        [anon_sym_RBRACE] = 277,
        [sym_identifier] = 279,
        [sym_number] = 279,
    },
    [48] = {
        [sym_identifier] = 281,
    },
    [49] = {
        [sym_tag] = 283,
        [sym_interpolated_expression] = 283,
        [sym_interpolated_if_statement] = 283,
        [sym_interpolated_while_statement] = 283,
        [sym_interpolated_code_block] = 283,
        [sym_open_tag] = 283,
        [sym__word] = 283,
        [anon_sym_AT] = 285,
        [anon_sym_ATif] = 283,
        [anon_sym_RBRACE] = 283,
        [anon_sym_ATwhile] = 283,
        [anon_sym_DOT] = 283,
        [anon_sym_LT] = 283,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 285,
        [sym__non_word] = 287,
    },
    [50] = {
        [anon_sym_LPAREN] = 289,
        [anon_sym_SEMI] = 291,
        [anon_sym_PLUS] = 293,
        [anon_sym_DASH] = 293,
        [anon_sym_DOT] = 295,
    },
    [51] = {
        [sym__expression] = 297,
        [sym__statement] = 297,
        [sym_expression_statement] = 297,
        [sym_binary_expression] = 297,
        [sym_call_expression] = 297,
        [sym_member_expression] = 297,
        [anon_sym_RBRACE] = 297,
        [sym_identifier] = 299,
        [sym_number] = 299,
    },
    [52] = {
        [sym__expression] = 301,
        [sym__statement] = 301,
        [sym_expression_statement] = 301,
        [sym_binary_expression] = 301,
        [sym_call_expression] = 301,
        [sym_member_expression] = 301,
        [anon_sym_RBRACE] = 301,
        [sym_identifier] = 303,
        [sym_number] = 303,
    },
    [53] = {
        [anon_sym_LPAREN] = 171,
        [anon_sym_SEMI] = 171,
        [anon_sym_PLUS] = 171,
        [anon_sym_DASH] = 171,
        [anon_sym_DOT] = 171,
    },
    [54] = {
        [sym__expression] = 267,
        [sym__statement] = 305,
        [sym_expression_statement] = 271,
        [sym_binary_expression] = 273,
        [sym_call_expression] = 273,
        [sym_member_expression] = 273,
        [anon_sym_RBRACE] = 307,
        [sym_identifier] = 279,
        [sym_number] = 279,
    },
    [55] = {
        [sym_tag] = 309,
        [sym_interpolated_expression] = 309,
        [sym_interpolated_if_statement] = 309,
        [sym_interpolated_while_statement] = 309,
        [sym_interpolated_code_block] = 309,
        [sym_open_tag] = 309,
        [sym__word] = 309,
        [anon_sym_AT] = 311,
        [anon_sym_ATif] = 309,
        [anon_sym_RBRACE] = 309,
        [anon_sym_ATwhile] = 309,
        [anon_sym_LT] = 309,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 311,
        [sym__non_word] = 313,
    },
    [56] = {
        [sym__expression] = 315,
        [sym__statement] = 315,
        [sym_expression_statement] = 315,
        [sym_binary_expression] = 315,
        [sym_call_expression] = 315,
        [sym_member_expression] = 315,
        [anon_sym_RBRACE] = 315,
        [sym_identifier] = 317,
        [sym_number] = 317,
    },
    [57] = {
        [sym_tag] = 319,
        [sym_interpolated_expression] = 319,
        [sym_interpolated_if_statement] = 319,
        [sym_interpolated_while_statement] = 319,
        [sym_interpolated_code_block] = 319,
        [sym_open_tag] = 319,
        [sym__word] = 319,
        [anon_sym_AT] = 321,
        [anon_sym_ATif] = 319,
        [anon_sym_RBRACE] = 319,
        [anon_sym_ATwhile] = 319,
        [anon_sym_LT] = 319,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 321,
        [sym__non_word] = 323,
    },
    [58] = {
        [sym__expression] = 325,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [anon_sym_RPAREN] = 327,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [59] = {
        [sym__expression] = 329,
        [sym__statement] = 329,
        [sym_expression_statement] = 329,
        [sym_binary_expression] = 329,
        [sym_call_expression] = 329,
        [sym_member_expression] = 329,
        [anon_sym_RBRACE] = 329,
        [sym_identifier] = 331,
        [sym_number] = 331,
    },
    [60] = {
        [sym__expression] = 333,
        [sym_binary_expression] = 273,
        [sym_call_expression] = 273,
        [sym_member_expression] = 273,
        [sym_identifier] = 279,
        [sym_number] = 279,
    },
    [61] = {
        [sym_identifier] = 335,
    },
    [62] = {
        [anon_sym_LPAREN] = 183,
        [anon_sym_SEMI] = 183,
        [anon_sym_PLUS] = 183,
        [anon_sym_DASH] = 183,
        [anon_sym_DOT] = 183,
    },
    [63] = {
        [anon_sym_LPAREN] = 185,
        [anon_sym_SEMI] = 185,
        [anon_sym_PLUS] = 185,
        [anon_sym_DASH] = 185,
        [anon_sym_DOT] = 185,
    },
    [64] = {
        [aux_sym_call_expression_repeat1] = 337,
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 339,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_COMMA] = 341,
        [anon_sym_DOT] = 169,
    },
    [65] = {
        [anon_sym_LPAREN] = 343,
        [anon_sym_SEMI] = 343,
        [anon_sym_PLUS] = 343,
        [anon_sym_DASH] = 343,
        [anon_sym_DOT] = 343,
    },
    [66] = {
        [anon_sym_RPAREN] = 345,
        [anon_sym_COMMA] = 347,
    },
    [67] = {
        [anon_sym_LPAREN] = 349,
        [anon_sym_SEMI] = 349,
        [anon_sym_PLUS] = 349,
        [anon_sym_DASH] = 349,
        [anon_sym_DOT] = 349,
    },
    [68] = {
        [sym__expression] = 351,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [69] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 353,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_COMMA] = 353,
        [anon_sym_DOT] = 169,
    },
    [70] = {
        [aux_sym_call_expression_repeat1] = 355,
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 357,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_COMMA] = 341,
        [anon_sym_DOT] = 169,
    },
    [71] = {
        [aux_sym_call_expression_repeat1] = 343,
        [anon_sym_LPAREN] = 343,
        [anon_sym_RPAREN] = 343,
        [anon_sym_PLUS] = 343,
        [anon_sym_DASH] = 343,
        [anon_sym_COMMA] = 343,
        [anon_sym_DOT] = 343,
    },
    [72] = {
        [anon_sym_RPAREN] = 359,
        [anon_sym_COMMA] = 347,
    },
    [73] = {
        [aux_sym_call_expression_repeat1] = 349,
        [anon_sym_LPAREN] = 349,
        [anon_sym_RPAREN] = 349,
        [anon_sym_PLUS] = 349,
        [anon_sym_DASH] = 349,
        [anon_sym_COMMA] = 349,
        [anon_sym_DOT] = 349,
    },
    [74] = {
        [aux_sym_call_expression_repeat1] = 361,
        [anon_sym_LPAREN] = 361,
        [anon_sym_RPAREN] = 361,
        [anon_sym_PLUS] = 361,
        [anon_sym_DASH] = 361,
        [anon_sym_COMMA] = 361,
        [anon_sym_DOT] = 361,
    },
    [75] = {
        [sym__expression] = 363,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [76] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 365,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_COMMA] = 365,
        [anon_sym_DOT] = 169,
    },
    [77] = {
        [anon_sym_LPAREN] = 361,
        [anon_sym_SEMI] = 361,
        [anon_sym_PLUS] = 361,
        [anon_sym_DASH] = 361,
        [anon_sym_DOT] = 361,
    },
    [78] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 367,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [79] = {
        [sym_tag] = 369,
        [sym_interpolated_expression] = 369,
        [sym_interpolated_if_statement] = 369,
        [sym_interpolated_while_statement] = 369,
        [sym_interpolated_code_block] = 369,
        [sym_open_tag] = 369,
        [sym__word] = 369,
        [anon_sym_AT] = 371,
        [anon_sym_ATif] = 369,
        [anon_sym_RBRACE] = 369,
        [anon_sym_ATwhile] = 369,
        [anon_sym_LT] = 369,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 371,
        [sym__non_word] = 373,
    },
    [80] = {
        [sym_tag] = 375,
        [sym_interpolated_expression] = 375,
        [sym_interpolated_if_statement] = 375,
        [sym_interpolated_while_statement] = 375,
        [sym_interpolated_code_block] = 375,
        [sym_open_tag] = 375,
        [sym__word] = 375,
        [anon_sym_AT] = 377,
        [anon_sym_ATif] = 375,
        [anon_sym_RBRACE] = 375,
        [anon_sym_ATwhile] = 375,
        [anon_sym_LT] = 375,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 377,
        [sym__non_word] = 379,
    },
    [81] = {
        [sym_close_tag] = 381,
        [anon_sym_LT_SLASH] = 383,
    },
    [82] = {
        [sym_tag] = 93,
        [sym_interpolated_expression] = 93,
        [sym_interpolated_if_statement] = 93,
        [sym_interpolated_while_statement] = 93,
        [sym_interpolated_code_block] = 93,
        [sym_open_tag] = 93,
        [sym_close_tag] = 93,
        [sym__word] = 93,
        [anon_sym_AT] = 95,
        [anon_sym_ATif] = 93,
        [anon_sym_ATwhile] = 93,
        [anon_sym_LT] = 95,
        [anon_sym_LT_SLASH] = 93,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 95,
        [sym__non_word] = 97,
    },
    [83] = {
        [sym__markup] = 385,
        [sym_tag] = 101,
        [sym_interpolated_expression] = 101,
        [sym_interpolated_if_statement] = 101,
        [sym_interpolated_while_statement] = 101,
        [sym_interpolated_code_block] = 101,
        [sym_open_tag] = 103,
        [sym_close_tag] = 75,
        [sym__word] = 101,
        [aux_sym__markup_repeat1] = 105,
        [anon_sym_AT] = 107,
        [anon_sym_ATif] = 109,
        [anon_sym_ATwhile] = 111,
        [anon_sym_LT] = 113,
        [anon_sym_LT_SLASH] = 75,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 115,
        [sym__non_word] = 117,
    },
    [84] = {
        [sym_tag] = 387,
        [sym_interpolated_expression] = 387,
        [sym_interpolated_if_statement] = 387,
        [sym_interpolated_while_statement] = 387,
        [sym_interpolated_code_block] = 387,
        [sym_open_tag] = 103,
        [sym_close_tag] = 121,
        [sym__word] = 387,
        [anon_sym_AT] = 107,
        [anon_sym_ATif] = 109,
        [anon_sym_ATwhile] = 111,
        [anon_sym_LT] = 113,
        [anon_sym_LT_SLASH] = 121,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 115,
        [sym__non_word] = 389,
    },
    [85] = {
        [sym_simple_member_expression] = 391,
        [anon_sym_LPAREN] = 393,
        [anon_sym_LBRACE] = 395,
        [sym_identifier] = 397,
    },
    [86] = {
        [anon_sym_LPAREN] = 399,
    },
    [87] = {
        [anon_sym_LPAREN] = 401,
    },
    [88] = {
        [sym_tag] = 141,
        [sym_interpolated_expression] = 141,
        [sym_interpolated_if_statement] = 141,
        [sym_interpolated_while_statement] = 141,
        [sym_interpolated_code_block] = 141,
        [sym_open_tag] = 141,
        [sym_close_tag] = 141,
        [sym__word] = 141,
        [anon_sym_AT] = 143,
        [anon_sym_ATif] = 141,
        [anon_sym_ATwhile] = 141,
        [anon_sym_LT] = 143,
        [anon_sym_LT_SLASH] = 141,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 143,
        [sym__non_word] = 145,
    },
    [89] = {
        [sym__expression] = 403,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [90] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 405,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [91] = {
        [anon_sym_LBRACE] = 407,
    },
    [92] = {
        [sym__markup] = 409,
        [sym_tag] = 189,
        [sym_interpolated_expression] = 189,
        [sym_interpolated_if_statement] = 189,
        [sym_interpolated_while_statement] = 189,
        [sym_interpolated_code_block] = 189,
        [sym_open_tag] = 191,
        [sym__word] = 189,
        [aux_sym__markup_repeat1] = 193,
        [anon_sym_AT] = 195,
        [anon_sym_ATif] = 197,
        [anon_sym_RBRACE] = 75,
        [anon_sym_ATwhile] = 199,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 201,
        [sym__non_word] = 203,
    },
    [93] = {
        [anon_sym_RBRACE] = 411,
    },
    [94] = {
        [sym_tag] = 235,
        [sym_interpolated_expression] = 235,
        [sym_interpolated_if_statement] = 235,
        [sym_interpolated_while_statement] = 235,
        [sym_interpolated_code_block] = 235,
        [sym_open_tag] = 235,
        [sym_close_tag] = 235,
        [sym__word] = 235,
        [anon_sym_AT] = 237,
        [anon_sym_ATif] = 235,
        [anon_sym_ATwhile] = 235,
        [anon_sym_LT] = 237,
        [anon_sym_LT_SLASH] = 235,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 237,
        [sym__non_word] = 239,
    },
    [95] = {
        [sym__expression] = 413,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [96] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 415,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [97] = {
        [anon_sym_LBRACE] = 417,
    },
    [98] = {
        [sym__markup] = 419,
        [sym_tag] = 189,
        [sym_interpolated_expression] = 189,
        [sym_interpolated_if_statement] = 189,
        [sym_interpolated_while_statement] = 189,
        [sym_interpolated_code_block] = 189,
        [sym_open_tag] = 191,
        [sym__word] = 189,
        [aux_sym__markup_repeat1] = 193,
        [anon_sym_AT] = 195,
        [anon_sym_ATif] = 197,
        [anon_sym_RBRACE] = 75,
        [anon_sym_ATwhile] = 199,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 201,
        [sym__non_word] = 203,
    },
    [99] = {
        [anon_sym_RBRACE] = 421,
    },
    [100] = {
        [sym_tag] = 251,
        [sym_interpolated_expression] = 251,
        [sym_interpolated_if_statement] = 251,
        [sym_interpolated_while_statement] = 251,
        [sym_interpolated_code_block] = 251,
        [sym_open_tag] = 251,
        [sym_close_tag] = 251,
        [sym__word] = 251,
        [anon_sym_AT] = 253,
        [anon_sym_ATif] = 251,
        [anon_sym_ATwhile] = 251,
        [anon_sym_LT] = 253,
        [anon_sym_LT_SLASH] = 251,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 253,
        [sym__non_word] = 255,
    },
    [101] = {
        [sym_tag] = 257,
        [sym_interpolated_expression] = 257,
        [sym_interpolated_if_statement] = 257,
        [sym_interpolated_while_statement] = 257,
        [sym_interpolated_code_block] = 257,
        [sym_open_tag] = 257,
        [sym_close_tag] = 257,
        [sym__word] = 257,
        [anon_sym_AT] = 259,
        [anon_sym_ATif] = 257,
        [anon_sym_ATwhile] = 257,
        [anon_sym_DOT] = 423,
        [anon_sym_LT] = 259,
        [anon_sym_LT_SLASH] = 257,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 259,
        [sym__non_word] = 263,
    },
    [102] = {
        [sym__expression] = 425,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [103] = {
        [sym__expression] = 267,
        [sym__statement] = 269,
        [sym_expression_statement] = 271,
        [sym_binary_expression] = 273,
        [sym_call_expression] = 273,
        [sym_member_expression] = 273,
        [aux_sym_interpolated_code_block_repeat1] = 427,
        [anon_sym_RBRACE] = 429,
        [sym_identifier] = 279,
        [sym_number] = 279,
    },
    [104] = {
        [sym_identifier] = 431,
    },
    [105] = {
        [sym_tag] = 283,
        [sym_interpolated_expression] = 283,
        [sym_interpolated_if_statement] = 283,
        [sym_interpolated_while_statement] = 283,
        [sym_interpolated_code_block] = 283,
        [sym_open_tag] = 283,
        [sym_close_tag] = 283,
        [sym__word] = 283,
        [anon_sym_AT] = 285,
        [anon_sym_ATif] = 283,
        [anon_sym_ATwhile] = 283,
        [anon_sym_DOT] = 283,
        [anon_sym_LT] = 285,
        [anon_sym_LT_SLASH] = 283,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 285,
        [sym__non_word] = 287,
    },
    [106] = {
        [sym__expression] = 267,
        [sym__statement] = 305,
        [sym_expression_statement] = 271,
        [sym_binary_expression] = 273,
        [sym_call_expression] = 273,
        [sym_member_expression] = 273,
        [anon_sym_RBRACE] = 433,
        [sym_identifier] = 279,
        [sym_number] = 279,
    },
    [107] = {
        [sym_tag] = 309,
        [sym_interpolated_expression] = 309,
        [sym_interpolated_if_statement] = 309,
        [sym_interpolated_while_statement] = 309,
        [sym_interpolated_code_block] = 309,
        [sym_open_tag] = 309,
        [sym_close_tag] = 309,
        [sym__word] = 309,
        [anon_sym_AT] = 311,
        [anon_sym_ATif] = 309,
        [anon_sym_ATwhile] = 309,
        [anon_sym_LT] = 311,
        [anon_sym_LT_SLASH] = 309,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 311,
        [sym__non_word] = 313,
    },
    [108] = {
        [sym_tag] = 319,
        [sym_interpolated_expression] = 319,
        [sym_interpolated_if_statement] = 319,
        [sym_interpolated_while_statement] = 319,
        [sym_interpolated_code_block] = 319,
        [sym_open_tag] = 319,
        [sym_close_tag] = 319,
        [sym__word] = 319,
        [anon_sym_AT] = 321,
        [anon_sym_ATif] = 319,
        [anon_sym_ATwhile] = 319,
        [anon_sym_LT] = 321,
        [anon_sym_LT_SLASH] = 319,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 321,
        [sym__non_word] = 323,
    },
    [109] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 435,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [110] = {
        [sym_tag] = 369,
        [sym_interpolated_expression] = 369,
        [sym_interpolated_if_statement] = 369,
        [sym_interpolated_while_statement] = 369,
        [sym_interpolated_code_block] = 369,
        [sym_open_tag] = 369,
        [sym_close_tag] = 369,
        [sym__word] = 369,
        [anon_sym_AT] = 371,
        [anon_sym_ATif] = 369,
        [anon_sym_ATwhile] = 369,
        [anon_sym_LT] = 371,
        [anon_sym_LT_SLASH] = 369,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 371,
        [sym__non_word] = 373,
    },
    [111] = {
        [sym_tag] = 375,
        [sym_interpolated_expression] = 375,
        [sym_interpolated_if_statement] = 375,
        [sym_interpolated_while_statement] = 375,
        [sym_interpolated_code_block] = 375,
        [sym_open_tag] = 375,
        [sym_close_tag] = 375,
        [sym__word] = 375,
        [anon_sym_AT] = 377,
        [anon_sym_ATif] = 375,
        [anon_sym_ATwhile] = 375,
        [anon_sym_LT] = 377,
        [anon_sym_LT_SLASH] = 375,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 377,
        [sym__non_word] = 379,
    },
    [112] = {
        [sym_close_tag] = 437,
        [anon_sym_LT_SLASH] = 439,
    },
    [113] = {
        [sym_tag] = 441,
        [sym_interpolated_expression] = 441,
        [sym_interpolated_if_statement] = 441,
        [sym_interpolated_while_statement] = 441,
        [sym_interpolated_code_block] = 441,
        [sym_open_tag] = 441,
        [sym_close_tag] = 441,
        [sym__word] = 441,
        [anon_sym_AT] = 443,
        [anon_sym_ATif] = 441,
        [anon_sym_ATwhile] = 441,
        [anon_sym_LT] = 443,
        [anon_sym_LT_SLASH] = 441,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 443,
        [sym__non_word] = 445,
    },
    [114] = {
        [sym__tag_name] = 447,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 139,
    },
    [115] = {
        [anon_sym_GT] = 449,
    },
    [116] = {
        [sym_tag] = 451,
        [sym_interpolated_expression] = 451,
        [sym_interpolated_if_statement] = 451,
        [sym_interpolated_while_statement] = 451,
        [sym_interpolated_code_block] = 451,
        [sym_open_tag] = 451,
        [sym_close_tag] = 451,
        [sym__word] = 451,
        [anon_sym_AT] = 453,
        [anon_sym_ATif] = 451,
        [anon_sym_ATwhile] = 451,
        [anon_sym_LT] = 453,
        [anon_sym_LT_SLASH] = 451,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 453,
        [sym__non_word] = 455,
    },
    [117] = {
        [sym_tag] = 441,
        [sym_interpolated_expression] = 441,
        [sym_interpolated_if_statement] = 441,
        [sym_interpolated_while_statement] = 441,
        [sym_interpolated_code_block] = 441,
        [sym_open_tag] = 441,
        [sym__word] = 441,
        [anon_sym_AT] = 443,
        [anon_sym_ATif] = 441,
        [anon_sym_RBRACE] = 441,
        [anon_sym_ATwhile] = 441,
        [anon_sym_LT] = 441,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 443,
        [sym__non_word] = 445,
    },
    [118] = {
        [sym__tag_name] = 457,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 139,
    },
    [119] = {
        [anon_sym_GT] = 459,
    },
    [120] = {
        [sym_tag] = 451,
        [sym_interpolated_expression] = 451,
        [sym_interpolated_if_statement] = 451,
        [sym_interpolated_while_statement] = 451,
        [sym_interpolated_code_block] = 451,
        [sym_open_tag] = 451,
        [sym__word] = 451,
        [anon_sym_AT] = 453,
        [anon_sym_ATif] = 451,
        [anon_sym_RBRACE] = 451,
        [anon_sym_ATwhile] = 451,
        [anon_sym_LT] = 451,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 453,
        [sym__non_word] = 455,
    },
    [121] = {
        [sym_tag] = 235,
        [sym_interpolated_expression] = 235,
        [sym_interpolated_if_statement] = 235,
        [sym_interpolated_while_statement] = 235,
        [sym_interpolated_code_block] = 235,
        [sym_open_tag] = 235,
        [sym__word] = 235,
        [ts_builtin_sym_end] = 235,
        [anon_sym_AT] = 237,
        [anon_sym_ATif] = 235,
        [anon_sym_ATwhile] = 235,
        [anon_sym_LT] = 235,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 237,
        [sym__non_word] = 239,
    },
    [122] = {
        [sym__expression] = 461,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [123] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 463,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [124] = {
        [anon_sym_LBRACE] = 465,
    },
    [125] = {
        [sym__markup] = 467,
        [sym_tag] = 189,
        [sym_interpolated_expression] = 189,
        [sym_interpolated_if_statement] = 189,
        [sym_interpolated_while_statement] = 189,
        [sym_interpolated_code_block] = 189,
        [sym_open_tag] = 191,
        [sym__word] = 189,
        [aux_sym__markup_repeat1] = 193,
        [anon_sym_AT] = 195,
        [anon_sym_ATif] = 197,
        [anon_sym_RBRACE] = 75,
        [anon_sym_ATwhile] = 199,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 201,
        [sym__non_word] = 203,
    },
    [126] = {
        [anon_sym_RBRACE] = 469,
    },
    [127] = {
        [sym_tag] = 251,
        [sym_interpolated_expression] = 251,
        [sym_interpolated_if_statement] = 251,
        [sym_interpolated_while_statement] = 251,
        [sym_interpolated_code_block] = 251,
        [sym_open_tag] = 251,
        [sym__word] = 251,
        [ts_builtin_sym_end] = 251,
        [anon_sym_AT] = 253,
        [anon_sym_ATif] = 251,
        [anon_sym_ATwhile] = 251,
        [anon_sym_LT] = 251,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 253,
        [sym__non_word] = 255,
    },
    [128] = {
        [sym_tag] = 257,
        [sym_interpolated_expression] = 257,
        [sym_interpolated_if_statement] = 257,
        [sym_interpolated_while_statement] = 257,
        [sym_interpolated_code_block] = 257,
        [sym_open_tag] = 257,
        [sym__word] = 257,
        [ts_builtin_sym_end] = 257,
        [anon_sym_AT] = 259,
        [anon_sym_ATif] = 257,
        [anon_sym_ATwhile] = 257,
        [anon_sym_DOT] = 471,
        [anon_sym_LT] = 257,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 259,
        [sym__non_word] = 263,
    },
    [129] = {
        [sym__expression] = 473,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [130] = {
        [sym__expression] = 267,
        [sym__statement] = 269,
        [sym_expression_statement] = 271,
        [sym_binary_expression] = 273,
        [sym_call_expression] = 273,
        [sym_member_expression] = 273,
        [aux_sym_interpolated_code_block_repeat1] = 475,
        [anon_sym_RBRACE] = 477,
        [sym_identifier] = 279,
        [sym_number] = 279,
    },
    [131] = {
        [sym_identifier] = 479,
    },
    [132] = {
        [sym_tag] = 283,
        [sym_interpolated_expression] = 283,
        [sym_interpolated_if_statement] = 283,
        [sym_interpolated_while_statement] = 283,
        [sym_interpolated_code_block] = 283,
        [sym_open_tag] = 283,
        [sym__word] = 283,
        [ts_builtin_sym_end] = 283,
        [anon_sym_AT] = 285,
        [anon_sym_ATif] = 283,
        [anon_sym_ATwhile] = 283,
        [anon_sym_DOT] = 283,
        [anon_sym_LT] = 283,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 285,
        [sym__non_word] = 287,
    },
    [133] = {
        [sym__expression] = 267,
        [sym__statement] = 305,
        [sym_expression_statement] = 271,
        [sym_binary_expression] = 273,
        [sym_call_expression] = 273,
        [sym_member_expression] = 273,
        [anon_sym_RBRACE] = 481,
        [sym_identifier] = 279,
        [sym_number] = 279,
    },
    [134] = {
        [sym_tag] = 309,
        [sym_interpolated_expression] = 309,
        [sym_interpolated_if_statement] = 309,
        [sym_interpolated_while_statement] = 309,
        [sym_interpolated_code_block] = 309,
        [sym_open_tag] = 309,
        [sym__word] = 309,
        [ts_builtin_sym_end] = 309,
        [anon_sym_AT] = 311,
        [anon_sym_ATif] = 309,
        [anon_sym_ATwhile] = 309,
        [anon_sym_LT] = 309,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 311,
        [sym__non_word] = 313,
    },
    [135] = {
        [sym_tag] = 319,
        [sym_interpolated_expression] = 319,
        [sym_interpolated_if_statement] = 319,
        [sym_interpolated_while_statement] = 319,
        [sym_interpolated_code_block] = 319,
        [sym_open_tag] = 319,
        [sym__word] = 319,
        [ts_builtin_sym_end] = 319,
        [anon_sym_AT] = 321,
        [anon_sym_ATif] = 319,
        [anon_sym_ATwhile] = 319,
        [anon_sym_LT] = 319,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 321,
        [sym__non_word] = 323,
    },
    [136] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 483,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [137] = {
        [sym_tag] = 369,
        [sym_interpolated_expression] = 369,
        [sym_interpolated_if_statement] = 369,
        [sym_interpolated_while_statement] = 369,
        [sym_interpolated_code_block] = 369,
        [sym_open_tag] = 369,
        [sym__word] = 369,
        [ts_builtin_sym_end] = 369,
        [anon_sym_AT] = 371,
        [anon_sym_ATif] = 369,
        [anon_sym_ATwhile] = 369,
        [anon_sym_LT] = 369,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 371,
        [sym__non_word] = 373,
    },
    [138] = {
        [sym_tag] = 375,
        [sym_interpolated_expression] = 375,
        [sym_interpolated_if_statement] = 375,
        [sym_interpolated_while_statement] = 375,
        [sym_interpolated_code_block] = 375,
        [sym_open_tag] = 375,
        [sym__word] = 375,
        [ts_builtin_sym_end] = 375,
        [anon_sym_AT] = 377,
        [anon_sym_ATif] = 375,
        [anon_sym_ATwhile] = 375,
        [anon_sym_LT] = 375,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 377,
        [sym__non_word] = 379,
    },
    [139] = {
        [sym_close_tag] = 485,
        [anon_sym_LT_SLASH] = 487,
    },
    [140] = {
        [sym_tag] = 441,
        [sym_interpolated_expression] = 441,
        [sym_interpolated_if_statement] = 441,
        [sym_interpolated_while_statement] = 441,
        [sym_interpolated_code_block] = 441,
        [sym_open_tag] = 441,
        [sym__word] = 441,
        [ts_builtin_sym_end] = 441,
        [anon_sym_AT] = 443,
        [anon_sym_ATif] = 441,
        [anon_sym_ATwhile] = 441,
        [anon_sym_LT] = 441,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 443,
        [sym__non_word] = 445,
    },
    [141] = {
        [sym__tag_name] = 489,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 139,
    },
    [142] = {
        [anon_sym_GT] = 491,
    },
    [143] = {
        [sym_tag] = 451,
        [sym_interpolated_expression] = 451,
        [sym_interpolated_if_statement] = 451,
        [sym_interpolated_while_statement] = 451,
        [sym_interpolated_code_block] = 451,
        [sym_open_tag] = 451,
        [sym__word] = 451,
        [ts_builtin_sym_end] = 451,
        [anon_sym_AT] = 453,
        [anon_sym_ATif] = 451,
        [anon_sym_ATwhile] = 451,
        [anon_sym_LT] = 451,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 453,
        [sym__non_word] = 455,
    },
    [144] = {
        [sym_simple_member_expression] = 493,
        [anon_sym_LPAREN] = 495,
        [anon_sym_LBRACE] = 497,
        [sym_identifier] = 499,
    },
    [145] = {
        [sym__expression] = 501,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [anon_sym_RPAREN] = 503,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [146] = {
        [sym_tag] = 369,
        [sym_interpolated_expression] = 369,
        [sym_interpolated_if_statement] = 369,
        [sym_interpolated_while_statement] = 369,
        [sym_interpolated_code_block] = 369,
        [sym_open_tag] = 369,
        [sym_close_tag] = 369,
        [sym__word] = 369,
        [aux_sym_call_expression_repeat1] = 505,
        [ts_builtin_sym_end] = 369,
        [anon_sym_AT] = 371,
        [anon_sym_LPAREN] = 509,
        [anon_sym_RPAREN] = 509,
        [anon_sym_ATif] = 369,
        [anon_sym_LBRACE] = 513,
        [anon_sym_RBRACE] = 369,
        [anon_sym_ATwhile] = 369,
        [anon_sym_SEMI] = 509,
        [anon_sym_PLUS] = 509,
        [anon_sym_DASH] = 509,
        [anon_sym_COMMA] = 509,
        [anon_sym_DOT] = 509,
        [anon_sym_LT] = 371,
        [anon_sym_LT_SLASH] = 369,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 371,
        [sym__non_word] = 373,
    },
    [147] = {
        [anon_sym_LPAREN] = 515,
    },
    [148] = {
        [sym__markup] = 517,
        [sym_tag] = 189,
        [sym_interpolated_expression] = 189,
        [sym_interpolated_if_statement] = 189,
        [sym_interpolated_while_statement] = 189,
        [sym_interpolated_code_block] = 189,
        [sym__expression] = 267,
        [sym__statement] = 269,
        [sym_expression_statement] = 271,
        [sym_binary_expression] = 273,
        [sym_call_expression] = 273,
        [sym_member_expression] = 273,
        [sym_open_tag] = 191,
        [sym__word] = 189,
        [aux_sym__markup_repeat1] = 193,
        [aux_sym_interpolated_code_block_repeat1] = 519,
        [anon_sym_AT] = 195,
        [anon_sym_ATif] = 197,
        [anon_sym_RBRACE] = 521,
        [anon_sym_ATwhile] = 199,
        [anon_sym_LT] = 83,
        [sym_identifier] = 279,
        [sym_number] = 279,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 524,
        [sym__non_word] = 203,
    },
    [149] = {
        [sym_tag] = 526,
        [sym_interpolated_expression] = 526,
        [sym_interpolated_if_statement] = 526,
        [sym_interpolated_while_statement] = 526,
        [sym_interpolated_code_block] = 526,
        [sym_open_tag] = 526,
        [sym_close_tag] = 526,
        [sym__word] = 526,
        [ts_builtin_sym_end] = 531,
        [anon_sym_AT] = 536,
        [anon_sym_ATif] = 531,
        [anon_sym_RBRACE] = 531,
        [anon_sym_ATwhile] = 531,
        [anon_sym_LT] = 536,
        [anon_sym_LT_SLASH] = 531,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 536,
        [sym__non_word] = 526,
    },
    [150] = {
        [anon_sym_LPAREN] = 541,
    },
    [151] = {
        [sym__expression] = 543,
        [sym_binary_expression] = 545,
        [sym_call_expression] = 545,
        [sym_member_expression] = 545,
        [sym_identifier] = 547,
        [sym_number] = 547,
    },
    [152] = {
        [sym__expression] = 549,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [153] = {
        [sym_identifier] = 551,
    },
    [154] = {
        [sym__markup] = 155,
        [sym_tag] = 553,
        [sym_interpolated_expression] = 553,
        [sym_interpolated_if_statement] = 553,
        [sym_interpolated_while_statement] = 553,
        [sym_interpolated_code_block] = 553,
        [sym_open_tag] = 553,
        [sym_close_tag] = 451,
        [sym__word] = 553,
        [aux_sym__markup_repeat1] = 155,
        [ts_builtin_sym_end] = 451,
        [anon_sym_AT] = 556,
        [anon_sym_ATif] = 559,
        [anon_sym_RBRACE] = 451,
        [anon_sym_ATwhile] = 559,
        [anon_sym_LT] = 556,
        [anon_sym_LT_SLASH] = 451,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 556,
        [sym__non_word] = 553,
    },
    [155] = {
        [sym__tag_name] = 562,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 139,
    },
    [156] = {
        [sym_tag] = 564,
        [sym_interpolated_expression] = 564,
        [sym_interpolated_if_statement] = 564,
        [sym_interpolated_while_statement] = 564,
        [sym_interpolated_code_block] = 564,
        [sym_open_tag] = 564,
        [sym_close_tag] = 564,
        [sym__word] = 564,
        [aux_sym_call_expression_repeat1] = 567,
        [ts_builtin_sym_end] = 570,
        [anon_sym_AT] = 573,
        [anon_sym_LPAREN] = 576,
        [anon_sym_RPAREN] = 576,
        [anon_sym_ATif] = 570,
        [anon_sym_RBRACE] = 570,
        [anon_sym_ATwhile] = 570,
        [anon_sym_SEMI] = 576,
        [anon_sym_PLUS] = 576,
        [anon_sym_DASH] = 576,
        [anon_sym_COMMA] = 576,
        [anon_sym_DOT] = 579,
        [anon_sym_LT] = 573,
        [anon_sym_LT_SLASH] = 570,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 573,
        [sym__non_word] = 564,
    },
    [157] = {
        [aux_sym_call_expression_repeat1] = 171,
        [anon_sym_LPAREN] = 171,
        [anon_sym_RPAREN] = 171,
        [anon_sym_SEMI] = 171,
        [anon_sym_PLUS] = 171,
        [anon_sym_DASH] = 171,
        [anon_sym_COMMA] = 171,
        [anon_sym_DOT] = 171,
    },
    [158] = {
        [sym_tag] = 141,
        [sym_interpolated_expression] = 141,
        [sym_interpolated_if_statement] = 141,
        [sym_interpolated_while_statement] = 141,
        [sym_interpolated_code_block] = 141,
        [sym_open_tag] = 141,
        [sym_close_tag] = 141,
        [sym__word] = 141,
        [ts_builtin_sym_end] = 141,
        [anon_sym_AT] = 143,
        [anon_sym_ATif] = 141,
        [anon_sym_RBRACE] = 141,
        [anon_sym_ATwhile] = 141,
        [anon_sym_LT] = 143,
        [anon_sym_GT] = 149,
        [anon_sym_LT_SLASH] = 141,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 143,
        [sym__non_word] = 145,
    },
    [159] = {
        [sym_close_tag] = 584,
        [ts_builtin_sym_end] = 91,
        [anon_sym_RBRACE] = 586,
        [anon_sym_LT_SLASH] = 588,
    },
    [160] = {
        [sym_tag] = 590,
        [sym_interpolated_expression] = 590,
        [sym_interpolated_if_statement] = 590,
        [sym_interpolated_while_statement] = 590,
        [sym_interpolated_code_block] = 590,
        [sym_open_tag] = 590,
        [sym_close_tag] = 590,
        [sym__word] = 590,
        [ts_builtin_sym_end] = 593,
        [anon_sym_AT] = 596,
        [anon_sym_ATif] = 593,
        [anon_sym_RBRACE] = 593,
        [anon_sym_ATwhile] = 593,
        [anon_sym_LT] = 596,
        [anon_sym_LT_SLASH] = 593,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 596,
        [sym__non_word] = 590,
    },
    [161] = {
        [aux_sym_call_expression_repeat1] = 599,
        [anon_sym_LPAREN] = 602,
        [anon_sym_RPAREN] = 605,
        [anon_sym_SEMI] = 610,
        [anon_sym_PLUS] = 613,
        [anon_sym_DASH] = 613,
        [anon_sym_COMMA] = 616,
        [anon_sym_DOT] = 621,
    },
    [162] = {
        [sym__expression] = 624,
        [sym__statement] = 624,
        [sym_expression_statement] = 624,
        [sym_binary_expression] = 624,
        [sym_call_expression] = 624,
        [sym_member_expression] = 624,
        [anon_sym_RBRACE] = 627,
        [sym_identifier] = 630,
        [sym_number] = 630,
    },
    [163] = {
        [sym_tag] = 257,
        [sym_interpolated_expression] = 257,
        [sym_interpolated_if_statement] = 257,
        [sym_interpolated_while_statement] = 257,
        [sym_interpolated_code_block] = 257,
        [sym_open_tag] = 257,
        [sym_close_tag] = 257,
        [sym__word] = 257,
        [ts_builtin_sym_end] = 257,
        [anon_sym_AT] = 259,
        [anon_sym_ATif] = 257,
        [anon_sym_RBRACE] = 257,
        [anon_sym_ATwhile] = 257,
        [anon_sym_DOT] = 633,
        [anon_sym_LT] = 259,
        [anon_sym_LT_SLASH] = 257,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 259,
        [sym__non_word] = 263,
    },
    [164] = {
        [sym__markup] = 635,
        [sym_tag] = 101,
        [sym_interpolated_expression] = 101,
        [sym_interpolated_if_statement] = 101,
        [sym_interpolated_while_statement] = 101,
        [sym_interpolated_code_block] = 101,
        [sym_open_tag] = 103,
        [sym_close_tag] = 75,
        [sym__word] = 101,
        [aux_sym__markup_repeat1] = 105,
        [anon_sym_AT] = 107,
        [anon_sym_ATif] = 109,
        [anon_sym_ATwhile] = 111,
        [anon_sym_LT] = 113,
        [anon_sym_LT_SLASH] = 75,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 115,
        [sym__non_word] = 117,
    },
    [165] = {
        [sym_tag] = 441,
        [sym_interpolated_expression] = 441,
        [sym_interpolated_if_statement] = 441,
        [sym_interpolated_while_statement] = 441,
        [sym_interpolated_code_block] = 441,
        [sym_open_tag] = 441,
        [sym_close_tag] = 441,
        [sym__word] = 441,
        [ts_builtin_sym_end] = 441,
        [anon_sym_AT] = 443,
        [anon_sym_ATif] = 441,
        [anon_sym_RBRACE] = 441,
        [anon_sym_ATwhile] = 441,
        [anon_sym_LT] = 443,
        [anon_sym_LT_SLASH] = 441,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 443,
        [sym__non_word] = 445,
    },
    [166] = {
        [anon_sym_GT] = 637,
    },
    [167] = {
        [sym_tag] = 639,
        [sym_interpolated_expression] = 639,
        [sym_interpolated_if_statement] = 639,
        [sym_interpolated_while_statement] = 639,
        [sym_interpolated_code_block] = 639,
        [sym_open_tag] = 641,
        [sym_close_tag] = 121,
        [sym__word] = 639,
        [ts_builtin_sym_end] = 121,
        [anon_sym_AT] = 643,
        [anon_sym_ATif] = 645,
        [anon_sym_RBRACE] = 121,
        [anon_sym_ATwhile] = 647,
        [anon_sym_LT] = 113,
        [anon_sym_LT_SLASH] = 121,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 649,
        [sym__non_word] = 651,
    },
    [168] = {
        [sym__expression] = 267,
        [sym__statement] = 305,
        [sym_expression_statement] = 271,
        [sym_binary_expression] = 273,
        [sym_call_expression] = 273,
        [sym_member_expression] = 273,
        [anon_sym_RBRACE] = 653,
        [sym_identifier] = 279,
        [sym_number] = 279,
    },
    [169] = {
        [anon_sym_RPAREN] = 655,
        [anon_sym_COMMA] = 347,
    },
    [170] = {
        [aux_sym_call_expression_repeat1] = 361,
        [anon_sym_LPAREN] = 361,
        [anon_sym_RPAREN] = 361,
        [anon_sym_SEMI] = 361,
        [anon_sym_PLUS] = 361,
        [anon_sym_DASH] = 361,
        [anon_sym_COMMA] = 361,
        [anon_sym_DOT] = 361,
    },
    [171] = {
        [sym_tag] = 319,
        [sym_interpolated_expression] = 319,
        [sym_interpolated_if_statement] = 319,
        [sym_interpolated_while_statement] = 319,
        [sym_interpolated_code_block] = 319,
        [sym_open_tag] = 319,
        [sym_close_tag] = 319,
        [sym__word] = 319,
        [ts_builtin_sym_end] = 319,
        [anon_sym_AT] = 321,
        [anon_sym_ATif] = 319,
        [anon_sym_RBRACE] = 319,
        [anon_sym_ATwhile] = 319,
        [anon_sym_LT] = 321,
        [anon_sym_LT_SLASH] = 319,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 321,
        [sym__non_word] = 323,
    },
    [172] = {
        [sym_tag] = 375,
        [sym_interpolated_expression] = 375,
        [sym_interpolated_if_statement] = 375,
        [sym_interpolated_while_statement] = 375,
        [sym_interpolated_code_block] = 375,
        [sym_open_tag] = 375,
        [sym_close_tag] = 375,
        [sym__word] = 375,
        [ts_builtin_sym_end] = 375,
        [anon_sym_AT] = 377,
        [anon_sym_ATif] = 375,
        [anon_sym_RBRACE] = 375,
        [anon_sym_ATwhile] = 375,
        [anon_sym_LT] = 377,
        [anon_sym_LT_SLASH] = 375,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 377,
        [sym__non_word] = 379,
    },
    [173] = {
        [sym_tag] = 141,
        [sym_interpolated_expression] = 141,
        [sym_interpolated_if_statement] = 141,
        [sym_interpolated_while_statement] = 141,
        [sym_interpolated_code_block] = 141,
        [sym_open_tag] = 141,
        [sym_close_tag] = 141,
        [sym__word] = 141,
        [ts_builtin_sym_end] = 141,
        [anon_sym_AT] = 143,
        [anon_sym_ATif] = 141,
        [anon_sym_RBRACE] = 141,
        [anon_sym_ATwhile] = 141,
        [anon_sym_LT] = 143,
        [anon_sym_LT_SLASH] = 141,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 143,
        [sym__non_word] = 145,
    },
    [174] = {
        [sym_close_tag] = 584,
        [anon_sym_LT_SLASH] = 588,
    },
    [175] = {
        [sym_identifier] = 657,
    },
    [176] = {
        [sym_tag] = 283,
        [sym_interpolated_expression] = 283,
        [sym_interpolated_if_statement] = 283,
        [sym_interpolated_while_statement] = 283,
        [sym_interpolated_code_block] = 283,
        [sym_open_tag] = 283,
        [sym_close_tag] = 283,
        [sym__word] = 283,
        [ts_builtin_sym_end] = 283,
        [anon_sym_AT] = 285,
        [anon_sym_ATif] = 283,
        [anon_sym_RBRACE] = 283,
        [anon_sym_ATwhile] = 283,
        [anon_sym_DOT] = 283,
        [anon_sym_LT] = 285,
        [anon_sym_LT_SLASH] = 283,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 285,
        [sym__non_word] = 287,
    },
    [177] = {
        [sym__expression] = 659,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [anon_sym_RPAREN] = 503,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [178] = {
        [sym_tag] = 369,
        [sym_interpolated_expression] = 369,
        [sym_interpolated_if_statement] = 369,
        [sym_interpolated_while_statement] = 369,
        [sym_interpolated_code_block] = 369,
        [sym_open_tag] = 369,
        [sym_close_tag] = 369,
        [sym__word] = 369,
        [aux_sym_call_expression_repeat1] = 349,
        [ts_builtin_sym_end] = 369,
        [anon_sym_AT] = 371,
        [anon_sym_LPAREN] = 349,
        [anon_sym_RPAREN] = 349,
        [anon_sym_ATif] = 369,
        [anon_sym_LBRACE] = 513,
        [anon_sym_RBRACE] = 369,
        [anon_sym_ATwhile] = 369,
        [anon_sym_SEMI] = 349,
        [anon_sym_PLUS] = 349,
        [anon_sym_DASH] = 349,
        [anon_sym_COMMA] = 349,
        [anon_sym_DOT] = 349,
        [anon_sym_LT] = 371,
        [anon_sym_LT_SLASH] = 369,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 371,
        [sym__non_word] = 373,
    },
    [179] = {
        [sym_identifier] = 661,
    },
    [180] = {
        [aux_sym_call_expression_repeat1] = 183,
        [anon_sym_LPAREN] = 183,
        [anon_sym_RPAREN] = 183,
        [anon_sym_SEMI] = 183,
        [anon_sym_PLUS] = 183,
        [anon_sym_DASH] = 183,
        [anon_sym_COMMA] = 183,
        [anon_sym_DOT] = 183,
    },
    [181] = {
        [sym__markup] = 517,
        [sym_tag] = 189,
        [sym_interpolated_expression] = 189,
        [sym_interpolated_if_statement] = 189,
        [sym_interpolated_while_statement] = 189,
        [sym_interpolated_code_block] = 189,
        [sym_open_tag] = 191,
        [sym__word] = 189,
        [aux_sym__markup_repeat1] = 193,
        [anon_sym_AT] = 195,
        [anon_sym_ATif] = 197,
        [anon_sym_RBRACE] = 75,
        [anon_sym_ATwhile] = 199,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 201,
        [sym__non_word] = 203,
    },
    [182] = {
        [anon_sym_RBRACE] = 586,
    },
    [183] = {
        [sym_tag] = 663,
        [sym_interpolated_expression] = 663,
        [sym_interpolated_if_statement] = 663,
        [sym_interpolated_while_statement] = 663,
        [sym_interpolated_code_block] = 663,
        [sym_open_tag] = 663,
        [sym_close_tag] = 663,
        [sym__word] = 663,
        [ts_builtin_sym_end] = 666,
        [anon_sym_AT] = 669,
        [anon_sym_ATif] = 666,
        [anon_sym_RBRACE] = 666,
        [anon_sym_ATwhile] = 666,
        [anon_sym_LT] = 669,
        [anon_sym_LT_SLASH] = 666,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 669,
        [sym__non_word] = 663,
    },
    [184] = {
        [aux_sym_call_expression_repeat1] = 672,
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 674,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_COMMA] = 341,
        [anon_sym_DOT] = 169,
    },
    [185] = {
        [aux_sym_call_expression_repeat1] = 343,
        [anon_sym_LPAREN] = 343,
        [anon_sym_RPAREN] = 343,
        [anon_sym_SEMI] = 343,
        [anon_sym_PLUS] = 343,
        [anon_sym_DASH] = 343,
        [anon_sym_COMMA] = 343,
        [anon_sym_DOT] = 343,
    },
    [186] = {
        [aux_sym_call_expression_repeat1] = 349,
        [anon_sym_LPAREN] = 349,
        [anon_sym_RPAREN] = 349,
        [anon_sym_SEMI] = 349,
        [anon_sym_PLUS] = 349,
        [anon_sym_DASH] = 349,
        [anon_sym_COMMA] = 349,
        [anon_sym_DOT] = 349,
    },
    [187] = {
        [anon_sym_GT] = 676,
    },
    [188] = {
        [sym_tag] = 451,
        [sym_interpolated_expression] = 451,
        [sym_interpolated_if_statement] = 451,
        [sym_interpolated_while_statement] = 451,
        [sym_interpolated_code_block] = 451,
        [sym_open_tag] = 451,
        [sym_close_tag] = 451,
        [sym__word] = 451,
        [ts_builtin_sym_end] = 451,
        [anon_sym_AT] = 453,
        [anon_sym_ATif] = 451,
        [anon_sym_RBRACE] = 451,
        [anon_sym_ATwhile] = 451,
        [anon_sym_LT] = 453,
        [anon_sym_LT_SLASH] = 451,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 453,
        [sym__non_word] = 455,
    },
    [189] = {
        [sym_tag] = 287,
        [sym_interpolated_expression] = 287,
        [sym_interpolated_if_statement] = 287,
        [sym_interpolated_while_statement] = 287,
        [sym_interpolated_code_block] = 287,
        [sym_open_tag] = 287,
        [sym_close_tag] = 287,
        [sym__word] = 287,
        [aux_sym_call_expression_repeat1] = 183,
        [ts_builtin_sym_end] = 283,
        [anon_sym_AT] = 285,
        [anon_sym_LPAREN] = 183,
        [anon_sym_RPAREN] = 183,
        [anon_sym_ATif] = 283,
        [anon_sym_RBRACE] = 283,
        [anon_sym_ATwhile] = 283,
        [anon_sym_SEMI] = 183,
        [anon_sym_PLUS] = 183,
        [anon_sym_DASH] = 183,
        [anon_sym_COMMA] = 183,
        [anon_sym_DOT] = 678,
        [anon_sym_LT] = 285,
        [anon_sym_LT_SLASH] = 283,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 285,
        [sym__non_word] = 287,
    },
    [190] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 681,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_COMMA] = 681,
        [anon_sym_DOT] = 169,
    },
    [191] = {
        [aux_sym_call_expression_repeat1] = 185,
        [anon_sym_LPAREN] = 602,
        [anon_sym_RPAREN] = 185,
        [anon_sym_SEMI] = 185,
        [anon_sym_PLUS] = 613,
        [anon_sym_DASH] = 613,
        [anon_sym_COMMA] = 185,
        [anon_sym_DOT] = 621,
    },
    [192] = {
        [sym__expression] = 684,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [193] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 686,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [194] = {
        [anon_sym_LBRACE] = 688,
    },
    [195] = {
        [sym__markup] = 690,
        [sym_tag] = 189,
        [sym_interpolated_expression] = 189,
        [sym_interpolated_if_statement] = 189,
        [sym_interpolated_while_statement] = 189,
        [sym_interpolated_code_block] = 189,
        [sym_open_tag] = 191,
        [sym__word] = 189,
        [aux_sym__markup_repeat1] = 193,
        [anon_sym_AT] = 195,
        [anon_sym_ATif] = 197,
        [anon_sym_RBRACE] = 75,
        [anon_sym_ATwhile] = 199,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 201,
        [sym__non_word] = 203,
    },
    [196] = {
        [anon_sym_RBRACE] = 692,
    },
    [197] = {
        [sym_tag] = 235,
        [sym_interpolated_expression] = 235,
        [sym_interpolated_if_statement] = 235,
        [sym_interpolated_while_statement] = 235,
        [sym_interpolated_code_block] = 235,
        [sym_open_tag] = 235,
        [sym_close_tag] = 235,
        [sym__word] = 235,
        [ts_builtin_sym_end] = 235,
        [anon_sym_AT] = 237,
        [anon_sym_ATif] = 235,
        [anon_sym_RBRACE] = 235,
        [anon_sym_ATwhile] = 235,
        [anon_sym_LT] = 237,
        [anon_sym_LT_SLASH] = 235,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 237,
        [sym__non_word] = 239,
    },
    [198] = {
        [sym_tag] = 309,
        [sym_interpolated_expression] = 309,
        [sym_interpolated_if_statement] = 309,
        [sym_interpolated_while_statement] = 309,
        [sym_interpolated_code_block] = 309,
        [sym_open_tag] = 309,
        [sym_close_tag] = 309,
        [sym__word] = 309,
        [ts_builtin_sym_end] = 309,
        [anon_sym_AT] = 311,
        [anon_sym_ATif] = 309,
        [anon_sym_RBRACE] = 309,
        [anon_sym_ATwhile] = 309,
        [anon_sym_LT] = 311,
        [anon_sym_LT_SLASH] = 309,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 311,
        [sym__non_word] = 313,
    },
    [199] = {
        [sym__expression] = 694,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [200] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 696,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [201] = {
        [anon_sym_LBRACE] = 698,
    },
    [202] = {
        [sym__markup] = 700,
        [sym_tag] = 189,
        [sym_interpolated_expression] = 189,
        [sym_interpolated_if_statement] = 189,
        [sym_interpolated_while_statement] = 189,
        [sym_interpolated_code_block] = 189,
        [sym_open_tag] = 191,
        [sym__word] = 189,
        [aux_sym__markup_repeat1] = 193,
        [anon_sym_AT] = 195,
        [anon_sym_ATif] = 197,
        [anon_sym_RBRACE] = 75,
        [anon_sym_ATwhile] = 199,
        [anon_sym_LT] = 83,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 201,
        [sym__non_word] = 203,
    },
    [203] = {
        [anon_sym_RBRACE] = 702,
    },
    [204] = {
        [sym_tag] = 251,
        [sym_interpolated_expression] = 251,
        [sym_interpolated_if_statement] = 251,
        [sym_interpolated_while_statement] = 251,
        [sym_interpolated_code_block] = 251,
        [sym_open_tag] = 251,
        [sym_close_tag] = 251,
        [sym__word] = 251,
        [ts_builtin_sym_end] = 251,
        [anon_sym_AT] = 253,
        [anon_sym_ATif] = 251,
        [anon_sym_RBRACE] = 251,
        [anon_sym_ATwhile] = 251,
        [anon_sym_LT] = 253,
        [anon_sym_LT_SLASH] = 251,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 253,
        [sym__non_word] = 255,
    },
    [205] = {
        [aux_sym_call_expression_repeat1] = 672,
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 704,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_COMMA] = 341,
        [anon_sym_DOT] = 169,
    },
    [206] = {
        [sym__expression] = 706,
        [sym_binary_expression] = 159,
        [sym_call_expression] = 159,
        [sym_member_expression] = 159,
        [sym_identifier] = 161,
        [sym_number] = 161,
    },
    [207] = {
        [sym__expression] = 267,
        [sym__statement] = 269,
        [sym_expression_statement] = 271,
        [sym_binary_expression] = 273,
        [sym_call_expression] = 273,
        [sym_member_expression] = 273,
        [aux_sym_interpolated_code_block_repeat1] = 519,
        [anon_sym_RBRACE] = 708,
        [sym_identifier] = 279,
        [sym_number] = 279,
    },
    [208] = {
        [anon_sym_LPAREN] = 163,
        [anon_sym_RPAREN] = 710,
        [anon_sym_PLUS] = 167,
        [anon_sym_DASH] = 167,
        [anon_sym_DOT] = 169,
    },
    [209] = {
        [sym_tag] = 369,
        [sym_interpolated_expression] = 369,
        [sym_interpolated_if_statement] = 369,
        [sym_interpolated_while_statement] = 369,
        [sym_interpolated_code_block] = 369,
        [sym_open_tag] = 369,
        [sym_close_tag] = 369,
        [sym__word] = 369,
        [ts_builtin_sym_end] = 369,
        [anon_sym_AT] = 371,
        [anon_sym_ATif] = 369,
        [anon_sym_RBRACE] = 369,
        [anon_sym_ATwhile] = 369,
        [anon_sym_LT] = 371,
        [anon_sym_LT_SLASH] = 369,
        [aux_sym_SLASH_BSLASHa_PLUS_SLASH] = 371,
        [sym__non_word] = 373,
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = true, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(2),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(159),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(160),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(161),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(162),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(52),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(157),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(163),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(164),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(165),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(166),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(167),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(168),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(169),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(144),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(145),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(146),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(147),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(148),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(149),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(150),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(59),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(151),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(152),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(153),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(10),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(154),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(155),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(156),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(157),
    [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(158),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__markup, 0),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
    [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_document, 1),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__markup_repeat1, 1),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__markup_repeat1, 1),
    [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__markup_repeat1, 1),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
    [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__markup, 1),
    [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__word, 1),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__word, 1),
    [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__word, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__tag_name, 1),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_open_tag, 3),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_open_tag, 3),
    [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_open_tag, 3),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_member_expression, 3),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
    [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
    [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interpolated_while_statement, 7),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interpolated_while_statement, 7),
    [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interpolated_while_statement, 7),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interpolated_if_statement, 7),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interpolated_if_statement, 7),
    [255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interpolated_if_statement, 7),
    [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interpolated_expression, 2),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interpolated_expression, 2),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interpolated_expression, 2),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_member_expression, 3),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_member_expression, 3),
    [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_member_expression, 3),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interpolated_code_block_repeat1, 1),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interpolated_code_block_repeat1, 1),
    [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interpolated_code_block, 3),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interpolated_code_block, 3),
    [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interpolated_code_block, 3),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interpolated_code_block_repeat1, 2),
    [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interpolated_code_block_repeat1, 2),
    [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interpolated_code_block, 4),
    [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interpolated_code_block, 4),
    [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interpolated_code_block, 4),
    [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
    [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
    [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expression_statement, 2),
    [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 3),
    [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 4),
    [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2),
    [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
    [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
    [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 5),
    [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 3),
    [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interpolated_expression, 4),
    [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interpolated_expression, 4),
    [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interpolated_expression, 4),
    [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__markup_repeat1, 2),
    [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__markup_repeat1, 2),
    [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__markup_repeat1, 2),
    [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
    [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [389] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
    [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
    [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
    [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
    [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
    [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
    [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
    [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
    [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
    [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
    [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
    [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
    [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
    [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tag, 3),
    [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tag, 3),
    [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tag, 3),
    [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
    [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
    [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_close_tag, 3),
    [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_close_tag, 3),
    [455] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_close_tag, 3),
    [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
    [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
    [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
    [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
    [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
    [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
    [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
    [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
    [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
    [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
    [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
    [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
    [505] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 3), REDUCE(sym_call_expression, 4), REDUCE(sym_call_expression, 5),
    [509] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 3), REDUCE(sym_call_expression, 4), REDUCE(sym_call_expression, 5),
    [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
    [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
    [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
    [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
    [521] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__markup, 0), SHIFT(198),
    [524] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
    [526] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interpolated_code_block, 3), REDUCE(sym_interpolated_code_block, 4), REDUCE(sym_interpolated_if_statement, 7), REDUCE(sym_interpolated_while_statement, 7),
    [531] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interpolated_code_block, 3), REDUCE(sym_interpolated_code_block, 4), REDUCE(sym_interpolated_if_statement, 7), REDUCE(sym_interpolated_while_statement, 7),
    [536] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interpolated_code_block, 3), REDUCE(sym_interpolated_code_block, 4), REDUCE(sym_interpolated_if_statement, 7), REDUCE(sym_interpolated_while_statement, 7),
    [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
    [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
    [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
    [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
    [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
    [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
    [553] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_open_tag, 3), REDUCE(sym_close_tag, 3),
    [556] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_open_tag, 3), REDUCE(sym_close_tag, 3),
    [559] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_open_tag, 3), REDUCE(sym_close_tag, 3),
    [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
    [564] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interpolated_expression, 2), REDUCE(sym_simple_member_expression, 3),
    [567] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_member_expression, 3),
    [570] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interpolated_expression, 2), REDUCE(sym_simple_member_expression, 3),
    [573] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interpolated_expression, 2), REDUCE(sym_simple_member_expression, 3),
    [576] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_member_expression, 3),
    [579] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_member_expression, 3), REDUCE(sym_simple_member_expression, 3), SHIFT(175),
    [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
    [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
    [588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
    [590] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__markup_repeat1, 1), REDUCE(aux_sym__markup_repeat1, 2),
    [593] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__markup_repeat1, 1), REDUCE(aux_sym__markup_repeat1, 2),
    [596] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__markup_repeat1, 1), REDUCE(aux_sym__markup_repeat1, 2),
    [599] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3), SHIFT(169),
    [602] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3), SHIFT(177),
    [605] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2), REDUCE(sym_binary_expression, 3), REDUCE(aux_sym_call_expression_repeat1, 3), SHIFT(178),
    [610] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3), SHIFT(59),
    [613] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3), SHIFT(151),
    [616] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2), REDUCE(sym_binary_expression, 3), REDUCE(aux_sym_call_expression_repeat1, 3), SHIFT(68),
    [621] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3), SHIFT(179),
    [624] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interpolated_code_block_repeat1, 1), REDUCE(aux_sym_interpolated_code_block_repeat1, 2),
    [627] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interpolated_code_block_repeat1, 1), REDUCE(aux_sym_interpolated_code_block_repeat1, 2),
    [630] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interpolated_code_block_repeat1, 1), REDUCE(aux_sym_interpolated_code_block_repeat1, 2),
    [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
    [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
    [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
    [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
    [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
    [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
    [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
    [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
    [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
    [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
    [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
    [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
    [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
    [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
    [663] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interpolated_if_statement, 7), REDUCE(sym_interpolated_while_statement, 7),
    [666] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interpolated_if_statement, 7), REDUCE(sym_interpolated_while_statement, 7),
    [669] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interpolated_if_statement, 7), REDUCE(sym_interpolated_while_statement, 7),
    [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
    [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
    [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
    [678] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_member_expression, 3), REDUCE(sym_simple_member_expression, 3),
    [681] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2), REDUCE(aux_sym_call_expression_repeat1, 3),
    [684] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
    [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
    [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
    [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
    [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
    [694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
    [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
    [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
    [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
    [702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
    [704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
    [706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
    [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
    [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_razor);
