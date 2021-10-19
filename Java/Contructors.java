public class Contructors {
    public static void main(String[] args) {
        Human Person1 = new Human("AYOUB", 20, 55);
        Human Person2 = new Human("Bilal", 27, 70);
        System.out.println(Person1.name);
        System.out.println(Person1.age);
        System.out.println(Person1.weight);
        System.out.println(Person2.name);
        System.out.println(Person2.age);
        System.out.println(Person2.weight);

        Person2.eat();
        Person1.drink();

       
    }
}
