import java.util.Scanner;

public class cassaForte {
    int[] combinazione = new int[3];
    float contDenaro = 0;
    boolean stato = true;

    public cassaForte(int denaro) {
        contDenaro = denaro;
    }

    public void impostaCombinazione(Scanner scanner) {
        int nComb;
        if (this.stato == true) {
            for (int i = 0; i < combinazione.length; i++) {
                System.out.println("Inserire " + (i + 1) + " elemento della bombinazone");
                nComb = scanner.nextInt();
                if (i == 0) {
                    if (nComb == 0 || nComb == 1) combinazione[i] = nComb;
                    else {
                        System.out.println("La prima cifra della combinazione deve essere 1 o 0\nRiprova per favore");
                        i--;
                    }
                } else if (combinazione[0] == 1) {
                    if (nComb == 0) combinazione[i] = nComb;
                    else {
                        System.out.println("Se la prima cifra è 1 le altre devono essere 0\nRiprovare per faovre");
                        i--;
                    }
                } else if (combinazione[0] == 0) {
                    if (nComb >= 0 && nComb <= 9) combinazione[i] = nComb;
                    else {
                        System.out.println("Impossibile inserire tale numero nella combinazione\nRiprovare per favore");
                        i--;
                    }
                }
            }
            this.stato = false;
        } else System.out.println("CASSA CHIUSA!!!");
    }

    public void cassaApertura(Scanner scanner) {
        int nComb;
        boolean erroreCommesso = false;
        if (this.stato == false) {
            do {
                for (int i = 0; i < combinazione.length; i++) {
                    nComb = scanner.nextInt();
                    if (nComb != combinazione[i]) erroreCommesso = true;
                }
                if (erroreCommesso) {
                    System.out.println("Il codice è errato \nRprovare");
                    erroreCommesso = false;
                } else this.stato = true;

            } while (this.stato == false);
        }
    }

    public void cassaChiusura() {
        stato = false;
        System.out.println("CHIUSA!!!");
    }

    public void addSoldi(float money) {
        if (this.stato == true) {
            contDenaro += money;
            System.out.println("Il tuo saldo attuale ammonta a " + this.contDenaro);
        } else System.out.println("CASSA CHIUSA!!!");
    }

    public void takeSoldi(float money) {
        if (this.stato == true) {
            if (money < contDenaro) {
                contDenaro -= money;
                System.out.println("Il tuo saldo attuale è " + contDenaro);
            } else System.out.println("Saldo non disponibile (chiedi più soldi di quelli che possiedi brother)!!");
        } else System.out.println("CASSA CHIUSA!!!");
    }

    public void Saldo() {
        if (this.stato == true) {
            System.out.println("Saldo disponibile-->" + this.contDenaro);
        } else System.out.println("CASSA CHIUSA!!");
    }

    public boolean getStato()
    {
        return this.stato;
    }
}
