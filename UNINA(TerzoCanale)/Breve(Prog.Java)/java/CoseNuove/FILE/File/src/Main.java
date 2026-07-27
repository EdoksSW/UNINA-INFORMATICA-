import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;

public class Main
{
    public static void main(String[] args) throws IOException {
        //FileWriter -> ottimo per file di testo piccoli o medi
        // BufferWriter -> Ottime performance su grandi quantità di testo
        // PrintWriter -> Migliore per strutture dati , come report o logs.
        // FileOutputStream -> Ottimo per file binari (es. immagini, audio)

        String textContent="I like pizza";
        try(FileWriter writer= new FileWriter("test.txt"))
        {
            writer.write(textContent);
            System.out.println("File has been written");
        }
        catch(FileNotFoundException e)
        {
            System.out.println("Could not locate fiel location");
        }
        catch(IOException e)
        {
            System.out.println("Could not write file");
        }
    }
}