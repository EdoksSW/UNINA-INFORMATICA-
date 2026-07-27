import org.w3c.dom.ls.LSOutput;

import java.sql.SQLOutput;

public class Main
{
    public void main(String[] args)
    {
        Studente studente=new Studente("Alessandro","Cirpriani","BliBluBla",1234,"FedericoII");
        Docente docente=new Docente("Annamaria", "Barbagallo","NonLoSo","Analisi", (float)1800.20);

        System.out.println(studente);
        System.out.println("\n\n");
        System.out.println(docente);
    }
}