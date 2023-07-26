// Sample code for the Bookstore program (partial implementation)
#include <iostream>
#include <string>
#include <vector>

// Book class to store book information
class Book
{
    std::string title;
    std::string author;
    double price;

public:
    // Constructor & Initialization using Initialize list
    Book(const std::string &title, const std::string &author, double price) : title(title), author(author), price(price) {}

    // Getter functions
    std::string getTitle() const
    {
        return title;
    }

    std::string getAuthor() const
    {
        return author;
    }

    double getPrice() const
    {
        return price;
    }
};

// Bookstore class to manage inventory and purchase transactions
class Bookstore
{
    std::vector<Book> inventory;

public:
    // Add book to inventory
    void addBook(const Book &book)
    {
        inventory.push_back(book);
    }

    // Display available books
    void displayBooks() const
    {
        std::cout << "Available Books:\n";
        for (const Book &book : inventory)
        {
            std::cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", Price: " << book.getPrice() << "$" << std::endl;
        }
    }

    // Process customer purchase
    void purchaseBook(const std::string &title)
    {
        // Find the book in inventory
        for (auto it = inventory.begin(); it != inventory.end(); ++it)
        {
            if (it->getTitle() == title)
            {
                std::cout << "Book purchased: " << it->getTitle() << std::endl;
                inventory.erase(it); // Remove the book from inventory
                return;
            }
        }
        std::cout << "Book not found." << std::endl;
    }
};

int main()
{
    Bookstore bookstore;

    // Add books to inventory
    bookstore.addBook(Book("The Catcher in the Rye", "J.D. Salinger", 9.99));
    bookstore.addBook(Book("To Kill a Mockingbird", "Harper Lee", 8.99));
    bookstore.addBook(Book("1984", "George Orwell", 7.99));

    // Display available books
    bookstore.displayBooks();

    // Process customer purchases
    bookstore.purchaseBook("To Kill a Mockingbird");
    bookstore.purchaseBook("The Great Gatsby");
    return 0;
}
