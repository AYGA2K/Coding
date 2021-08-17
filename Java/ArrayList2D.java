 import java.util.*;
public class ArrayList2D {
    public static void main(String[] args) {
        
        ArrayList<ArrayList<String>> List = new ArrayList<>();

        ArrayList<String> bakeryList = new ArrayList<>();
        bakeryList.add("F1");
        bakeryList.add("F2");

        ArrayList<String> DrinkList= new ArrayList<>();
        DrinkList.add("D1");
        DrinkList.add("D2");
        List.add(bakeryList);
        List.add(DrinkList);
      
        System.out.println(List);
        
    }
}
