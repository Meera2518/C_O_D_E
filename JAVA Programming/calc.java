import java.io.Reader;

public class calc {
    
    public static void main(String[] args) {
        System.out.println("Calculator"); 
         double first = Reader.nextDouble();
         double second = Reader.nextDouble();

         System.out.println("Enter an operator(+ ,- ,* ,/ ):");
         char operator = reader.next().charAt(0);
        
         double result;
         switch (operator)
         {
             case '+':
                  Result = first + second ;
                  break;
    
            case '-':
                 Result = first + second ;
                 break;

            case '*':
                 Result = first * second ;
                 break;

            case '/':
                 Result = first / second ;
                 break;

                 default:
                 // system.out.println ave be printf c programming ma ave bhel puri banavi teto 
                 System.out.println(" Error! operater is not correct ");
                         return;
         }
         System.out.println("%f",result);
        
        }
}