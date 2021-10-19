public class Human {
   String name ;
   int age ;
   int weight;

  
    Human( String name, int age , int weight )
    {
        this.name=name;
        this.age=age;
        this.weight=weight;
    }
    void eat()
    {
        System.out.println(this.name+" is eating");
        
    }
    void drink()
    {
        System.out.println(this.name+" is drinking");
    }
}
