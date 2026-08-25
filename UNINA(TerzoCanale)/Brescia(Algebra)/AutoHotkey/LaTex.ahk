; =========================================================
; XOURNAL++ - SCRIPT CENTRALE PER APPUNTI MATEMATICI
; =========================================================

; --- 1. APERTURA RIQUADRO LATEX ---
; Premi Alt + Z per aprire lo strumento LaTeX 
; (Forza l'invio di Ctrl + Shift + X scavalcando il sistema)
!z::SendInput, {Ctrl down}{Shift down}x{Shift up}{Ctrl up}


; --- 2. ESPANSIONE RAPIDA SIMBOLI LATEX ---
; L'opzione :*: significa che il testo si trasforma all'istante,
; senza bisogno di premere Spazio o Invio.

; --- Insiemi Numerici ---
:*:;N::\mathbb{N}
:*:;Z::\mathbb{Z}
:*:;Q::\mathbb{Q}
:*:;R::\mathbb{R}

; --- Quantificatori ---
:*:;perogni::\forall
:*:;esiste::\exists
:*:;unico::\exists!

; --- Insiemistica ---
:*:;unione::\cup
:*:;inter::\cap
:*:;vuoto::\emptyset
:*:;app::\in
:*:;nonapp::\notin
:*:;sotto::\subseteq
:*:;nonsotto::\nsubseteq
:*:;diff::\setminus
:*:;delta::\Delta

; --- Logica e Reti Logiche ---
:*:;not::\neg
:*:;and::\land
:*:;or::\lor
:*:;implica::\rightarrow
:*:;doppia::\leftrightarrow
:*:;nand::\uparrow
:*:;nor::\downarrow
:*:;xor::\oplus

; --- Relazioni e Variabili ---
:*:;magug::\geq
:*:;minug::\leq
:*:;div::\neq
:*:;rho::\rho

; --- Formattazione Testo ---
:*:;testo::\text{}{Left}