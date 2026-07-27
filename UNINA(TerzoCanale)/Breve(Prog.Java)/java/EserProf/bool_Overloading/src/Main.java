class Main
{
    public static void main(String[] args)
    {
        Book book1=new Book("Firlando","Orlando Firlenze");
        Book book2=new Book("Galassia Con me", "Gianmarco coglione", (float)22.99);

        book1.printBook();
        System.out.println("\n");
        book2.printBook();

    }
}