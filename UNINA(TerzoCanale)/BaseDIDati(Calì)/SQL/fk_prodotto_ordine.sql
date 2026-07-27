ALTER TABLE prodotto
ADD COLUMN id_Ordine INT NOT NULL,
ADD CONSTRAINT fk_prodotto_ordine
		FOREIGN KEY (id_Ordine)
		REFERENCES ordine(id_ordine);