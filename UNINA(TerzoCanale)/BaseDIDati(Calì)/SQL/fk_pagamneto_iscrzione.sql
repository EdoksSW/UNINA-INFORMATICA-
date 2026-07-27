ALTER TABLE pagamento
ADD COLUMN id_iscrizione INT,
ADD CONSTRAINT fk_pagamento_iscrizione
	FOREIGN KEY (id_iscrizione)
	REFERENCES iscrizione(id_iscrizione)
	ON DELETE CASCADE;