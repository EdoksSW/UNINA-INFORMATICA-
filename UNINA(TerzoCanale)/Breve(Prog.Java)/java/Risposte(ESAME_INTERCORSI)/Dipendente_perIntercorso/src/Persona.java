
    public abstract class Persona
    {
        protected String nome;
        protected String cognome;
        protected String CodiceFiscale;

        public Persona(String nome, String Cognome, String CodiceFiscale)
        {
            this.nome=nome;
            this.cognome=Cognome;
            this.CodiceFiscale=CodiceFiscale;
        }

        public abstract String toString();

    }
