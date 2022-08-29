#include QMK_KEYBOARD_H
#include "symbolnames.h"

void process_symbol_name(char *str) {
    // Greek Alphabet
    if (strcmp(str, "alpha") == 0) {
        send_unicode_string("α");
    }
    else if (strcmp(str, "Alpha") == 0) {
        send_unicode_string("Α");
    }
    else if (strcmp(str, "beta") == 0) {
        send_unicode_string("β");
    }
    else if (strcmp(str, "Beta") == 0) {
        send_unicode_string("Β");
    }
	else if (strcmp(str, "gamma") == 0) {
        send_unicode_string("γ");
	}
    else if (strcmp(str, "Gamma") == 0) {
        send_unicode_string("Γ");
    }
    else if (strcmp(str, "delta") == 0) {
        send_unicode_string("δ");
    }
    else if (strcmp(str, "Delta") == 0) {
        send_unicode_string("Δ");
    }
    else if (strcmp(str, "epsilon") == 0) {
        send_unicode_string("ε");
    }
    else if (strcmp(str, "Epsilon") == 0) {
        send_unicode_string("Ε");
    }
    else if (strcmp(str, "zeta") == 0) {
        send_unicode_string("ζ");
    }
    else if (strcmp(str, "Zeta") == 0) {
        send_unicode_string("Ζ");
    }
    else if (strcmp(str, "eta") == 0) {
        send_unicode_string("η");
    }
    else if (strcmp(str, "Eta") == 0) {
        send_unicode_string("Η");
    }
    else if (strcmp(str, "theta") == 0) {
        send_unicode_string("θ");
    }
    else if (strcmp(str, "Theta") == 0) {
        send_unicode_string("Θ");
    }
    else if (strcmp(str, "iota") == 0) {
        send_unicode_string("ι");
    }
    else if (strcmp(str, "Iota") == 0) {
        send_unicode_string("Ι");
    }
    else if (strcmp(str, "kappa") == 0) {
        send_unicode_string("κ");
    }
    else if (strcmp(str, "Kappa") == 0) {
        send_unicode_string("Κ");
    }
    else if (strcmp(str, "lambda") == 0) {
        send_unicode_string("λ");
    }
    else if (strcmp(str, "Lambda") == 0) {
        send_unicode_string("Λ");
    }
    else if (strcmp(str, "mu") == 0) {
        send_unicode_string("μ");
    }
    else if (strcmp(str, "Mu") == 0) {
        send_unicode_string("Μ");
    }
    else if (strcmp(str, "nu") == 0) {
        send_unicode_string("ν");
    }
    else if (strcmp(str, "Nu") == 0) {
        send_unicode_string("Ν");
    }
    else if (strcmp(str, "xi") == 0) {
        send_unicode_string("ξ");
    }
    else if (strcmp(str, "Xi") == 0) {
        send_unicode_string("Ξ");
    }
    else if (strcmp(str, "omicron") == 0) {
        send_unicode_string("ο");
    }
    else if (strcmp(str, "Omicron") == 0) {
        send_unicode_string("Ο");
    }
    else if (strcmp(str, "pi") == 0) {
        send_unicode_string("π");
    }
    else if (strcmp(str, "Pi") == 0) {
        send_unicode_string("Π");
    }
    else if (strcmp(str, "rho") == 0) {
        send_unicode_string("ρ");
    }
    else if (strcmp(str, "Rho") == 0) {
        send_unicode_string("Ρ");
    }
    else if (strcmp(str, "sigma") == 0) {
        send_unicode_string("σ");
    }
    else if (strcmp(str, "Sigma") == 0) {
        send_unicode_string("Σ");
    }
    else if (strcmp(str, "tau") == 0) {
        send_unicode_string("τ");
    }
    else if (strcmp(str, "Tau") == 0) {
        send_unicode_string("Τ");
    }
    else if (strcmp(str, "upsilon") == 0) {
        send_unicode_string("υ");
    }
    else if (strcmp(str, "Upsilon") == 0) {
        send_unicode_string("Υ");
    }
    else if (strcmp(str, "phi") == 0) {
        send_unicode_string("φ");
    }
    else if (strcmp(str, "Pbi") == 0) {
        send_unicode_string("Φ");
    }
    else if (strcmp(str, "chi") == 0) {
        send_unicode_string("χ");
    }
    else if (strcmp(str, "Chi") == 0) {
        send_unicode_string("χ");
    }
    else if (strcmp(str, "psi") == 0) {
        send_unicode_string("ψ");
    }
    else if (strcmp(str, "Psi") == 0) {
        send_unicode_string("ψ");
    }
    else if (strcmp(str, "omega") == 0) {
        send_unicode_string("ω");
    }
    else if (strcmp(str, "Omega") == 0) {
        send_unicode_string("Ω");
    }

    // Diacratics
    else if (strcmp(str, ":a") == 0) {
        send_unicode_string("ä");
    }
    else if (strcmp(str, "'a") == 0) {
        send_unicode_string("á");
    }
    else if (strcmp(str, "`a") == 0) {
        send_unicode_string("à");
    }
    else if (strcmp(str, "^a") == 0) {
        send_unicode_string("â");
    }
    else if (strcmp(str, "~a") == 0) {
        send_unicode_string("ã");
    }
    else if (strcmp(str, ".a") == 0) {
        send_unicode_string("å");
    }
    else if (strcmp(str, ":A") == 0) {
        send_unicode_string("Ä");
    }
    else if (strcmp(str, "'A") == 0) {
        send_unicode_string("Á");
    }
    else if (strcmp(str, "`A") == 0) {
        send_unicode_string("À");
    }
    else if (strcmp(str, "^A") == 0) {
        send_unicode_string("Â");
    }
    else if (strcmp(str, "~A") == 0) {
        send_unicode_string("Ã");
    }
    else if (strcmp(str, ".A") == 0) {
        send_unicode_string("Å");
    }

    else if (strcmp(str, ":e") == 0) {
        send_unicode_string("ë");
    }
    else if (strcmp(str, "'e") == 0) {
        send_unicode_string("é");
    }
    else if (strcmp(str, "`e") == 0) {
        send_unicode_string("è");
    }
    else if (strcmp(str, "^e") == 0) {
        send_unicode_string("ê");
    }
    else if (strcmp(str, ":E") == 0) {
        send_unicode_string("Ë");
    }
    else if (strcmp(str, "'E") == 0) {
        send_unicode_string("É");
    }
    else if (strcmp(str, "`E") == 0) {
        send_unicode_string("È");
    }
    else if (strcmp(str, "^E") == 0) {
        send_unicode_string("Ê");
    }

    else if (strcmp(str, ":i") == 0) {
        send_unicode_string("ï");
    }
    else if (strcmp(str, "'i") == 0) {
        send_unicode_string("í");
    }
    else if (strcmp(str, "`i") == 0) {
        send_unicode_string("ì");
    }
    else if (strcmp(str, "^i") == 0) {
        send_unicode_string("î");
    }
    else if (strcmp(str, ":I") == 0) {
        send_unicode_string("Ï");
    }
    else if (strcmp(str, "'I") == 0) {
        send_unicode_string("Í");
    }
    else if (strcmp(str, "`I") == 0) {
        send_unicode_string("Ì");
    }
    else if (strcmp(str, "^I") == 0) {
        send_unicode_string("Î");
    }

    else if (strcmp(str, ":o") == 0) {
        send_unicode_string("ö");
    }
    else if (strcmp(str, "'o") == 0) {
        send_unicode_string("ó");
    }
    else if (strcmp(str, "`o") == 0) {
        send_unicode_string("ò");
    }
    else if (strcmp(str, "^o") == 0) {
        send_unicode_string("ô");
    }
    else if (strcmp(str, "~o") == 0) {
        send_unicode_string("õ");
    }
    else if (strcmp(str, ":O") == 0) {
        send_unicode_string("Ö");
    }
    else if (strcmp(str, "'O") == 0) {
        send_unicode_string("Ó");
    }
    else if (strcmp(str, "`O") == 0) {
        send_unicode_string("Ò");
    }
    else if (strcmp(str, "^O") == 0) {
        send_unicode_string("Ô");
    }
    else if (strcmp(str, "~O") == 0) {
        send_unicode_string("Õ");
    }

    else if (strcmp(str, ":u") == 0) {
        send_unicode_string("ü");
    }
    else if (strcmp(str, "'u") == 0) {
        send_unicode_string("ú");
    }
    else if (strcmp(str, "`u") == 0) {
        send_unicode_string("ù");
    }
    else if (strcmp(str, "^u") == 0) {
        send_unicode_string("û");
    }
    else if (strcmp(str, ":U") == 0) {
        send_unicode_string("Ü");
    }
    else if (strcmp(str, "'U") == 0) {
        send_unicode_string("Ú");
    }
    else if (strcmp(str, "`U") == 0) {
        send_unicode_string("Ù");
    }
    else if (strcmp(str, "^U") == 0) {
        send_unicode_string("Û");
    }

    else if (strcmp(str, "'y") == 0) {
        send_unicode_string("ý");
    }
    else if (strcmp(str, ":y") == 0) {
        send_unicode_string("ÿ");
    }
    else if (strcmp(str, "'Y") == 0) {
        send_unicode_string("Ý");
    }
    else if (strcmp(str, ":Y") == 0) {
        send_unicode_string("Ÿ");
    }

    else if (strcmp(str, "~n") == 0) {
        send_unicode_string("ñ");
    }
    else if (strcmp(str, "~N") == 0) {
        send_unicode_string("Ñ");
    }

    else if (strcmp(str, "ae") == 0) {
        send_unicode_string("æ");
    }
    else if (strcmp(str, "AE") == 0) {
        send_unicode_string("Æ");
    }
    else if (strcmp(str, "oe") == 0) {
        send_unicode_string("œ");
    }
    else if (strcmp(str, "OE") == 0) {
        send_unicode_string("Œ");
    }

    else if (strcmp(str, ",c") == 0) {
        send_unicode_string("œ");
    }
    else if (strcmp(str, ",C") == 0) {
        send_unicode_string("Œ");
    }

    else if (strcmp(str, "'d") == 0) {
        send_unicode_string("ð");
    }
    else if (strcmp(str, "'D") == 0) {
        send_unicode_string("Ð");
    }

    else if (strcmp(str, "/o") == 0) {
        send_unicode_string("ø");
    }
    else if (strcmp(str, "/O") == 0) {
        send_unicode_string("Ø");
    }

    else if (strcmp(str, "S") == 0) {
        send_unicode_string("ß");
    }

    // Punctuation
    else if (strcmp(str, "!") == 0) {
        send_unicode_string("¡");
    }
    else if (strcmp(str, "?") == 0) {
        send_unicode_string("¿");
    }

    // Math stuff
    else if (strcmp(str, "aleph") == 0) {
        send_unicode_string("א");
    }
    else if (strcmp(str, "prod") == 0) {
        send_unicode_string("∏");
    }
    else if (strcmp(str, "sqrt") == 0) {
        send_unicode_string("√");
    }
    else if (strcmp(str, "propto") == 0) {
        send_unicode_string("∝");
    }
    else if (strcmp(str, "identical") == 0) {
        send_unicode_string("≡");
    }
    else if (strcmp(str, "approx") == 0) {
        send_unicode_string("≈");
    }
    else if (strcmp(str, "neq") == 0) {
        send_unicode_string("≠");
    }
    else if (strcmp(str, "ll") == 0) {
        send_unicode_string("≪");
    }
    else if (strcmp(str, "gg") == 0) {
        send_unicode_string("≫");
    }
    else if (strcmp(str, "leq") == 0) {
        send_unicode_string("≤");
    }
    else if (strcmp(str, "geq") == 0) {
        send_unicode_string("≥");
    }
    else if (strcmp(str, "Rightarrow") == 0) {
        send_unicode_string("⇒");
    }
    else if (strcmp(str, "Leftarrow") == 0) {
        send_unicode_string("⇐");
    }
    else if (strcmp(str, "Leftrightarrow") == 0) {
        send_unicode_string("⇔");
    }
    else if (strcmp(str, "perpindicular") == 0) {
        send_unicode_string("⊥");
    }
    else if (strcmp(str, "congruent") == 0) {
        send_unicode_string("≅");
    }
    else if (strcmp(str, "infty") == 0) {
        send_unicode_string("∞");
    }
    else if (strcmp(str, "element") == 0) {
        send_unicode_string("∈");
    }
    else if (strcmp(str, "!element") == 0) {
        send_unicode_string("∉");
    }
    else if (strcmp(str, "Natural") == 0) {
        send_unicode_string("ℕ");
    }
    else if (strcmp(str, "Integer") == 0) {
        send_unicode_string("ℤ");
    }
    else if (strcmp(str, "Rational") == 0) {
        send_unicode_string("ℚ");
    }
    else if (strcmp(str, "Real") == 0) {
        send_unicode_string("ℝ");
    }
    else if (strcmp(str, "Complex") == 0) {
        send_unicode_string("ℂ");
    }
    else if (strcmp(str, "int") == 0) {
        send_unicode_string("∫");
    }
    else if (strcmp(str, "bigcap") == 0) {
        send_unicode_string("⋂");
    }
    else if (strcmp(str, "bigcup") == 0) {
        send_unicode_string("⋃");
    }
    else if (strcmp(str, "subset") == 0) {
        send_unicode_string("⊂");
    }
    else if (strcmp(str, "ssubset") == 0) {
        send_unicode_string("⊆");
    }
    else if (strcmp(str, "supset") == 0) {
        send_unicode_string("⊃");
    }
    else if (strcmp(str, "ssupset") == 0) {
        send_unicode_string("⊇");
    }
    else if (strcmp(str, "therefore") == 0) {
        send_unicode_string("∴");
    }
    else if (strcmp(str, "nabla") == 0) {
        send_unicode_string("∇");
    }
    else if (strcmp(str, "partial") == 0) {
        send_unicode_string("∂");
    }
    else if (strcmp(str, "forall") == 0) {
        send_unicode_string("∀");
    }
    else if (strcmp(str, "exists") == 0) {
        send_unicode_string("∃");
    }
    else if (strcmp(str, "nexists") == 0) {
        send_unicode_string("∄");
    }
    else if (strcmp(str, "varnothing") == 0) {
        send_unicode_string("∅");
    }

    // Misc symbols
     else if (strcmp(str, "deg") == 0) {
        send_unicode_string("°");
    }

    // Input modes
    else if (strcmp(str, "mac") == 0) {
        set_unicode_input_mode(UC_MAC);
    }
    else if (strcmp(str, "winc") == 0) {
        set_unicode_input_mode(UC_WINC);
    }
    else if (strcmp(str, "lnx") == 0) {
        set_unicode_input_mode(UC_LNX);
    }
}
