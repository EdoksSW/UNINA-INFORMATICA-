public class Book
{
    private String title;
    private String author;
    private float price;

    public Book(String title, String author)
    {
        this.title=title;
        this.author=author;
    }

    public Book(String title, String author, float price)
    {
        this.author=author;
        this.title=title;
        this.price=price;
    }

    public void printBook()
    {
        System.out.println("Autore->"+author+"\nTitolo->"+title+"\nPrezzo->"+price);
    }
}
