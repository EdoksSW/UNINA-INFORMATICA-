CREATE TABLE Staff_Assegnato_Turno
(
	cf_staff VARCHAR(16),
	id_turno INT,
	PRIMARY KEY(cf_staff, id_turno),

	CONSTRAINT fk_assegnato_staff
		FOREIGN KEY(cf_staff)
		REFERENCES Staff(codicefiscale)
		ON DELETE CASCADE,

	CONSTRAINT fk_assegnato_turno
		FOREIGN KEY(id_turno)
		REFERENCES Turno(id_turno)
		ON DELETE CASCADE
);