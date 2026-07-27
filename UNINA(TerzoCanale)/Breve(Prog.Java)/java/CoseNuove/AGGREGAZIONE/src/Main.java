import java.sql.SQLOutput;

public class Main
{
    public static void main(String[] args)
    {
        Book book1=new Book("The Fellow of the Ring",423);
        Book book2=new Book("The Two Towers",352);
        Book book3=new Book("The Return of the King",416);

        Book[] books={book1,book2,book3};

        Library library=new Library("Mondadori", 1998, books);

        library.displayInfo();
    }
}