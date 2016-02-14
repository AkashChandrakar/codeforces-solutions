import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws NumberFormatException,
            IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(
                System.in));
        int n = Integer.parseInt(reader.readLine());
        int[] array = new int[n - 1];
        String[] line = reader.readLine().split("\\s");
        for (int i = 0; i < line.length; i++) {
            array[i] = Integer.parseInt(line[i]);
        }
        line = reader.readLine().split("\\s");
        int a = Integer.parseInt(line[0])-1;
        int b = Integer.parseInt(line[1])-1;
        if (a == b) {
            System.out.println(0);
        } else {
            int sum = 0;
            for (int i = a; i < b; i++) {
                sum += array[i];
            }
            System.out.println(sum);
        }
    }
}