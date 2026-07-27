public class Main
{
    public static void main(String[] args)
    {
        /*Inheritance (ereditarietà) --> una classe eredita gli attributi e i metodi
                                         da un'altra classe
                                         Figlia <-- Padre <-- Grandparent
         */
        Dog dog=new Dog();
        Cat cat=new Cat();

        System.out.println(dog.isAlive);
        System.out.println(cat.isAlive);
    }
}