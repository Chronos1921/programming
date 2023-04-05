import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner; 
abstract class Employee{
    double basic;
    double dAllowance;
    double houseRent;
    double medicalAllowance=1500;
    double salary;
    String name;
  
    public  void getEmployeedetails(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter name");
        name=sc.nextLine();
        System.out.println("Enter basic Pay");
        basic=sc.nextDouble();
       
    }
    abstract void displayEmployeeDetails();
    abstract double computeSalary();
}
class HeadTeacher extends Employee{
   
    double computeSalary(){
        dAllowance=0.45*basic;
        houseRent=0.12*basic;
        salary=basic+dAllowance+houseRent+medicalAllowance;
        return salary;
    }
    void displayEmployeeDetails(){
        System.out.println("Name of the Head Teacher is " + name);
        System.out.println("Salary of the Head Teacher is " + salary);
    }
}
class AssistantTeacher extends Employee{
    double computeSalary(){
        dAllowance=0.45*basic;
        houseRent=0.12*basic;
        salary=basic+dAllowance+houseRent+medicalAllowance;
        return salary;
    }
    void displayEmployeeDetails(){
        System.out.println("Name of the Assistant Teacher is " + name);
        System.out.println("Salary of the Assistant Teacher is " + salary);
    }
}
class Librarian extends Employee{
    double computeSalary(){
        dAllowance=0.45*basic;
        houseRent=0.12*basic;
        salary=basic+dAllowance+houseRent+medicalAllowance;
        return salary;
    }
    void displayEmployeeDetails(){
        System.out.println("Name of the Librarian is " + name);
        System.out.println("Salary of the Librarian is " + salary);
    }
}


public class Q01{
    public static void main(String[] args) throws IOException {
        // HeadTeacher H1=new HeadTeacher();
        // AssistantTeacher A1=new AssistantTeacher();
        // AssistantTeacher A2=new AssistantTeacher();
        // Librarian L1=new Librarian();
        // System.out.println("Enter the details of Head Teacher");
        // H1.getEmployeedetails();
        // System.out.println("Enter the details of Assistant Teacher 1");
        // A1.getEmployeedetails();
        // System.out.println("Enter the details of Assistant Teacher 2");
        // A2.getEmployeedetails();
        // System.out.println("Enter the details of  Librarian");
        // L1.getEmployeedetails();
        // L1.computeSalary();
        // A1.computeSalary();
        // A2.computeSalary();
        // H1.computeSalary();
        // L1.displayEmployeeDetails();
        // A1.displayEmployeeDetails();
        // A2.displayEmployeeDetails();
        // H1.displayEmployeeDetails();
        // try{
        // FileWriter myWriter = new FileWriter("out.txt");
        // myWriter.write("Head Details: "+ H1.name+"\n"+ H1.computeSalary());
        // myWriter.write("\nAssistant Details: "+A1.name +"\n" +A1.computeSalary()+"\n"+ A2.name+"\n" +A2.computeSalary());
        // myWriter.write("\nLibrary Details: "+L1.name +"\n"+L1.computeSalary());
        // myWriter.close();
        // System.out.println("Successfully wrote to the file.");
        FileReader fr=new FileReader("out.txt");
        int ch;
        while((ch=fr.read())!=-1){
            System.out.print((char)ch);
        }
     }
      
    
}