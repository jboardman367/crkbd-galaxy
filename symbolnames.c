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
