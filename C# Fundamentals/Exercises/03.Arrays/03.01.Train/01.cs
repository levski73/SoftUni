﻿using System;

namespace _03._01.Train
{
    class Program
    {
        static void Main(string[] args)
        {
            int wagons = int.Parse(Console.ReadLine());
            int[] train = new int[wagons];
            int peoples = 0;

            for (int i = 0; i < wagons; i++)
            {
                train[i] = int.Parse(Console.ReadLine());
                peoples += train[i];
            }

            Console.WriteLine(string.Join(" ",train));
            Console.WriteLine(peoples);
        }
    }
}
