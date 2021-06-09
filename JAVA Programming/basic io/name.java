
import java.util.*;

public class name {
    // create main method
    public static void main(String[] args) {
        System.out.println("Hello, World!"); 
        Scanner sc= new Scanner(System.in); //System.in is a standard input stream  
        System.out.print("Enter a string: ");  
        String str= sc.nextLine();              //reads string   
        System.out.print("You have entered: "+str); 
        sc.close();
    }
}