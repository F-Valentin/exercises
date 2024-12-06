using System;
using System.Collections.Generic;

namespace MyApp // Note: actual namespace depends on the project name.
{
    class Item
    {
        public string Name;
        public string Quantity;

        public Item(string Name, string Quantity)
        {
            this.Name = Name;
            this.Quantity = Quantity;
        }
    }
    class Inventory
    {
        public Item Sword;
        public Item Shield;
        
        public List<Item> items;
        public void AddItem()
        {
            Console.WriteLine(items);
            
            Console.WriteLine("What is the name of the item you want to add: ");
            string? Name = Console.ReadLine();
            Console.WriteLine("The quantity of your item: ");
            string? Quantity = Console.ReadLine();
            Item NewItem = new Item(Name, Quantity);
            items.Add(NewItem);
            
            Item Clothes = new Item("Clothes", "1");
            items.Add(Clothes);
        }
        public void RemoveItem()
        {
            Console.WriteLine("To delete an item, write its index: ");
            string? Index = Console.ReadLine();
            int IndexInt = int.Parse(Index);
            items.RemoveAt(IndexInt);

        }
        public Inventory()
        {
            Sword = new Item("Sword", "1");
            Shield = new Item("Shield", "1");
            items = new List<Item>{Sword, Shield};
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            bool running = true;
            Inventory inventory = new Inventory();
            int index = 0;
            while (running)
            {
                Console.WriteLine("Choose your option:");
                Console.WriteLine("1 - Add an Object,");
                Console.WriteLine("2 - Remove an Object,");
                Console.WriteLine("3 - See your Inventory");
                Console.WriteLine("4 - Quit");
                Console.WriteLine("Your option: ");
                string? UserInput = Console.ReadLine();
                switch (UserInput)
                {
                    case "1":
                        inventory.AddItem();
                        break;
                    case "2":
                        inventory.RemoveItem();
                        break;
                    case "3":
                        index = 0;
                        foreach (Item item in inventory.items)
                        {
                            Console.WriteLine($"Index: {index}, Name: {item.Name}, Quantity: {item.Quantity}");
                            index++;
                        }
                        break;
                    case "4":
                        return;
                    default:
                        Console.WriteLine("Please enter 1, 2, 3, or 4");
                        break;
                }
            } 
        }
    }
}
