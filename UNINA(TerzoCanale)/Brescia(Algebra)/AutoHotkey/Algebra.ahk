; --- OPERATORI LOGICI BASE ---

; Premi Alt + N per digitare ¬ (NOT - negazione)
!n::Send, {U+00AC}

; Premi Alt + A per digitare ∧ (AND - congiunzione)
!a::Send, {U+2227}

; Premi Alt + O per digitare ∨ (OR - disgiunzione)
!o::Send, {U+2228}

; Premi Alt + I per digitare → (IMPLIES - implicazione)
!i::Send, {U+2192}

; Premi Alt + D per digitare ↔ (IFF - doppia implicazione)
!d::Send, {U+2194}


; --- MAGGIORE, MINORE E DIVERSO ---

; Premi Alt + M per digitare > (Maggiore)
!m::Send, {U+003E}

; Premi Alt + L per digitare < (Minore)
!l::Send, {U+003C}

; Premi Alt + Shift + M per digitare ≥ (Maggiore o uguale)
!+m::Send, {U+2265}

; Premi Alt + Shift + L per digitare ≤ (Minore o uguale)
!+l::Send, {U+2264}

; Premi Alt + Shift + D per digitare ≠ (Diverso / Non uguale)
!+d::Send, {U+2260}


; --- NUOVI OPERATORI LOGICI (NAND, NOR, XOR) ---

; Premi Alt + Shift + A per digitare ↑ (NAND - Freccia di Sheffer)
!+a::Send, {U+2191}

; Premi Alt + Shift + O per digitare ↓ (NOR - Freccia di Peirce)
!+o::Send, {U+2193}

; Premi Alt + X per digitare ⊕ (XOR - OR Esclusivo)
!x::Send, {U+2295}


; --- TEORIA DEGLI INSIEMI E ALGEBRA ---

; Premi Alt + U per digitare ∪ (Unione)
!u::Send, {U+222A}

; Premi Alt + E per digitare ∩ (Intersezione)
!e::Send, {U+2229}

; Premi Alt + 0 (numero zero) per digitare ∅ (Insieme vuoto)
!0::Send, {U+2205}

; Premi Alt + B per digitare ∈ (Appartiene a / Elemento di)
!b::Send, {U+2208}

; Premi Alt + Shift + B per digitare ∉ (Non appartiene a / Non è elemento di)
!+b::Send, {U+2209}

; Premi Alt + C per digitare ⊆ (Sottoinsieme di o uguale / Contenuto)
!c::Send, {U+2286}

; Premi Alt + Shift + C per digitare ⊈ (Non è sottoinsieme di / Non contenuto)
!+c::Send, {U+2288}

; Premi Alt + K per digitare \ (Backslash / Differenza insiemistica)
!k::Send, {U+005C}

; Premi Alt + T per digitare ∆ (Differenza simmetrica / Delta)
!t::Send, {U+2206}

; Premi Alt + P per digitare × (Prodotto cartesiano / Croce vettoriale)
!p::Send, {U+00D7}

; Premi Alt + Q per digitare ⋅ (Prodotto / Punto operatore)
!q::Send, {U+22C5}


; --- QUANTIFICATORI ---

; Premi Alt + V per digitare ∀ (Quantificatore Universale)
!v::Send, {U+2200}

; Premi Alt + S per digitare ∃ (Quantificatore Esistenziale)
!s::Send, {U+2203}

; Premi Alt + Shift + S per digitare ∃! (Quantificatore Esistenziale Unico)
!+s::Send, {U+2203}{!}


; --- ALFABETO GRECO ---

; Premi Alt + R per digitare ρ (Rho minuscola)
!r::Send, {U+03C1}


; --- PEDICI (Numeri in basso) ---

; Premi Alt + Shift + 1 per digitare ₁
!+1::Send, {U+2081}

; Premi Alt + Shift + 2 per digitare ₂
!+2::Send, {U+2082}

; Premi Alt + Shift + 3 per digitare ₃
!+3::Send, {U+2083}

; Premi Alt + Shift + 4 per digitare ₄
!+4::Send, {U+2084}

; Premi Alt + Shift + 5 per digitare ₅
!+5::Send, {U+2085}

; Premi Alt + Shift + 6 per digitare ₆
!+6::Send, {U+2086}

; Premi Alt + Shift + 7 per digitare ₇
!+7::Send, {U+2087}

; Premi Alt + Shift + 8 per digitare ₈
!+8::Send, {U+2088}

; Premi Alt + Shift + 9 per digitare ₉
!+9::Send, {U+2089}

; Premi Alt + Shift + 0 per digitare ₀
!+0::Send, {U+2080}


; --- APICI (Numeri in alto / Esponenti) ---

; Premi Ctrl + Alt + 1 per digitare ¹
^!1::Send, {U+00B9}

; Premi Ctrl + Alt + 2 per digitare ²
^!2::Send, {U+00B2}

; Premi Ctrl + Alt + 3 per digitare ³
^!3::Send, {U+00B3}

; Premi Ctrl + Alt + 4 per digitare ⁴
^!4::Send, {U+2074}

; Premi Ctrl + Alt + 5 per digitare ⁵
^!5::Send, {U+2075}

; Premi Ctrl + Alt + 6 per digitare ⁶
^!6::Send, {U+2076}

; Premi Ctrl + Alt + 7 per digitare ⁷
^!7::Send, {U+2077}

; Premi Ctrl + Alt + 8 per digitare ⁸
^!8::Send, {U+2078}

; Premi Ctrl + Alt + 9 per digitare ⁹
^!9::Send, {U+2079}

; Premi Ctrl + Alt + 0 per digitare ⁰
^!0::Send, {U+2070}

; =========================================================
; INSIEMI E LETTERE ESPONENTI (Parole Magiche)
; =========================================================

; --- Insiemi Numerici ---
:X*:;N::Send, {U+2115}
:X*:;Z::Send, {U+2124}
:X*:;Q::Send, {U+211A}
:X*:;R::Send, {U+211D}

; --- Esponenti Letterali ---
:X*:;espn::Send, {U+207F}
:X*:;espx::Send, {U+02E3}


; =========================================================
; SEGNI MATEMATICI ESPONENTI (Scorciatoie / Hotkeys)
; =========================================================

; Premi Ctrl + Alt + P (Più) per digitare ⁺
^!p::Send, {U+207A}

; Premi Ctrl + Alt + O (MenO) per digitare ⁻
^!o::Send, {U+207B}