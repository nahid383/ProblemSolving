import java.util.ArrayList;
import java.util.List;

// Abstract base class
abstract class Order {
    protected String orderID;
    protected String customerName;
    protected double totalAmount;

    public Order(String orderID, String customerName, double totalAmount) {
        this.orderID = orderID;
        this.customerName = customerName;
        this.totalAmount = totalAmount;
    }

    // Abstract method for delivery calculation
    public abstract int calculateDeliveryTime(); // returns estimated days
}

// Subclass for Regular Orders
class RegularOrder extends Order {

    public RegularOrder(String orderID, String customerName, double totalAmount) {
        super(orderID, customerName, totalAmount);
    }

    @Override
    public int calculateDeliveryTime() {
        // Standard delivery estimate, e.g., 3 days
        return 3;
    }
}

// Subclass for Express Orders
class ExpressOrder extends Order {

    public ExpressOrder(String orderID, String customerName, double totalAmount) {
        super(orderID, customerName, totalAmount);
    }

    @Override
    public int calculateDeliveryTime() {
        // Faster delivery, e.g., 1 day
        return 1;
    }
}

// Main class
public class FoodDeliveryPlatform {

    public static void main(String[] args) {

        // List to hold all orders using single reference type
        List<Order> orders = new ArrayList<>();

        // Creating some orders
        Order order1 = new RegularOrder("R101", "Alice", 150.0);
        Order order2 = new ExpressOrder("E201", "Bob", 250.0);
        Order order3 = new RegularOrder("R102", "Charlie", 120.0);
        Order order4 = new ExpressOrder("E202", "Diana", 300.0);

        // Adding orders to the list
        orders.add(order1);
        orders.add(order2);
        orders.add(order3);
        orders.add(order4);

        // Processing all orders
        for (Order order : orders) {
            System.out.println("Order ID: " + order.orderID);
            System.out.println("Customer: " + order.customerName);
            System.out.println("Total Amount: $" + order.totalAmount);
            System.out.println("Estimated Delivery Time: " + order.calculateDeliveryTime() + " day(s)");
            System.out.println("----------------------------");
        }
    }
}
