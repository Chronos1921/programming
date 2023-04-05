import java.util.Scanner;

interface vehichle{
    public void getVehichlename();
    public void getCapicity();
    public void getMilage();
    public void getSpeed();
}
abstract class TwoWheller{
    abstract  void dispayVehichledetails();
}
abstract class ThreeWheller{
    abstract  void dispayVehichledetails();
}
abstract class FourWheller{
    abstract  void dispayVehichledetails();
}
class Scotter extends TwoWheller implements vehichle{
   
    String name;
    String capacity;
    String milage;
    String speed;
    Scanner sc=new Scanner(System.in);
    public void getVehichlename(){
        System.out.println("Enter name of the Vehichle");
        name=sc.nextLine();
    }
    public void getCapicity(){
        System.out.println("Enter capacity of the Vehichle");
        capacity=sc.nextLine();
    }
    public void getMilage(){
        System.out.println("Enter milage of the Vehichle");
        milage=sc.nextLine();
    }
    public void getSpeed(){
        System.out.println("Enter speed of the Vehichle");
        speed=sc.nextLine();
    }
    void dispayVehichledetails(){
        System.out.println("The name of the Scotter is "+ name);
        System.out.println("The capacity of the Scotter is "+ capacity);
        System.out.println("The milage of the Scotter is "+ milage);
        System.out.println("The speed  of the Scotter is "+ speed);
    }

}
class AutoRickshaw extends ThreeWheller implements vehichle{
   
    String name;
    String capacity;
    String milage;
    String speed;
    Scanner sc=new Scanner(System.in);
    public void getVehichlename(){
        System.out.println("Enter name of the Vehichle");
        name=sc.nextLine();
    }
    public void getCapicity(){
        System.out.println("Enter capacity of the Vehichle");
        capacity=sc.nextLine();
    }
    public void getMilage(){
        System.out.println("Enter milage of the Vehichle");
        milage=sc.nextLine();
    }
    public void getSpeed(){
        System.out.println("Enter speed of the Vehichle");
        speed=sc.nextLine();
    }
    void dispayVehichledetails(){
        System.out.println("The name of the AutoRickshaw is "+ name);
        System.out.println("The capacity of the AutoRickshaw is "+ capacity);
        System.out.println("The milage of the AutoRickshaw is "+ milage);
        System.out.println("The speed  of the AutoRickshaw is "+ speed);
    }

}
class Truck extends TwoWheller implements vehichle{
   
    String name;
    String capacity;
    String milage;
    String speed;
    Scanner sc=new Scanner(System.in);
    public void getVehichlename(){
        System.out.println("Enter name of the Vehichle");
        name=sc.nextLine();
    }
    public void getCapicity(){
        System.out.println("Enter capacity of the Vehichle");
        capacity=sc.nextLine();
    }
    public void getMilage(){
        System.out.println("Enter milage of the Vehichle");
        milage=sc.nextLine();
    }
    public void getSpeed(){
        System.out.println("Enter speed of the Vehichle");
        speed=sc.nextLine();
    }
    void dispayVehichledetails(){
        System.out.println("The name of the Truck is "+ name);
        System.out.println("The capacity of the Truck is "+ capacity);
        System.out.println("The milage of the Truck is "+ milage);
        System.out.println("The speed  of the Truck is "+ speed);
    }

}
public class Q02 {
    public static void main(String[] args) {
        Scotter s1=new Scotter();
        s1.getVehichlename();
        s1.getCapicity();
        s1.getMilage();
        s1.getSpeed();
        s1.dispayVehichledetails();
        AutoRickshaw a1=new AutoRickshaw();
        a1.getVehichlename();
        a1.getCapicity();
        a1.getMilage();
        a1.getSpeed();
        a1.dispayVehichledetails();
        Truck t1=new Truck();
        t1.getVehichlename();
        t1.getCapicity();
        t1.getMilage();
        t1.getSpeed();
        t1.dispayVehichledetails();
    }
    
}
