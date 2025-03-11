import java.util.Arrays;
import java.util.List;

//The forEach method is commonly used in Java with collections/arrays of data.
//Using streams, a method can be called on each element in an array/collection
//map, filter, forEach, are all stream methods.
//the method that is being called to access or modify each element
public class Main {
    public static void main(String[] args) {

        //Example 1 forEach is built-in for LIST of strings
        List<String> strings = Arrays.asList("Lets", "use", "Java", "Streams");
         strings.forEach(System.out::println); //println is static function passed as an argument. What does that mean?

        //Example 2 forEach is built-in for LIST of Integers
        List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
        System.out.println("numbers: ");
        numbers.forEach(System.out::print);

        //ignore: .filter .map and .toList
        //Remember: forEach is the topic.

        //Example 3 Filter and keep only even numbers.
        System.out.println("\nOnly Evens");
        List<Integer> evenNumbers = numbers.stream() //NOTE: integer streams use this word.
                .filter(n -> n % 2 == 0) //Fiter only even numbers
                .toList();
        evenNumbers.forEach(System.out::println);

        //Example 4 call forEach at end of stream
        System.out.println("Times 2 and over 10");
        evenNumbers.stream()
                .map(n -> n * 2) //even numbers doubled.
                .filter(n -> n > 10) //filtered anything under 10 is removed.
                .forEach(System.out::println);
    }//end main
}//end class

//This program shows how often forEach is used in java

