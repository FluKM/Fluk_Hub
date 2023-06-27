/*Here is a basic code of an online shopping cart where you can add your products and price and then display
an amount.*/

import java.util.*;

class Product {
    private String name;
    private double price;

    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }
}

class ShoppingCart {
    private List<Product> items;

    public ShoppingCart() {
        items = new ArrayList<>();
    }

    public void addItem(Product product) {
        items.add(product);
    }

    public double getTotalPrice() {
        double total = 0.0;
        for (Product item : items) {
            total += item.getPrice();
        }
        return total;
    }

    public void displayCart() {
        System.out.println("Shopping Cart:");
        for (Product item : items) {
            System.out.println(item.getName() + " - RS." + item.getPrice());
        }
        System.out.println("Total: Rs." + getTotalPrice());
    }
}

public class ShoppingCartcode {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ShoppingCart cart = new ShoppingCart();

        while (true) {
            System.out.println("Enter product name (or 'done' to finish):"); //accepts the product names from useror returns to final calculator
            String productName = scanner.nextLine();
            if (productName.equals("done")) {
                break;
            }

            System.out.println("Enter product price:"); //accpets the product price from user
            double productPrice = scanner.nextDouble();
            scanner.nextLine(); // Clear the newline character

            Product product = new Product(productName, productPrice);
            cart.addItem(product);

            System.out.println("Product added to cart.");
        }

        cart.displayCart();
    }
}

//© FluKM 2023
