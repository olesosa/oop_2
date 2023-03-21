public class Program
{
    static void Main(string[] args)
    {
        Console.ForegroundColor = ConsoleColor.Cyan;

        int n = 8;
        int[,] array = new int[n, n];
        Random rnd = new Random();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                array[i, j] = rnd.Next(-10, 11);
                Console.Write("\t" + array[i, j]);
            }
            Console.WriteLine();
        }

        for(int i = 0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if (array[i, j] == array[j, i])
                {
                    Console.Write(i + "" + j + " ");
                }
            }
        }

        int[] sum = new int[n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (array[i, j] < 0)
                {
                    sum[i] += array[i, j];
                }
            }
        }
        Console.WriteLine();
        for (int i = 0; i < sum.GetLength(0); i++)
        {
            Console.WriteLine(sum[i]);
        }
    }
}
