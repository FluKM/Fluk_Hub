   //This is an expense calculator with the help of c++ programming language which helps you track your expences
    #include <iostream>
    #include <vector>
    #include <string>
    using namespace std;

    struct Expense {
        string category;
        double amount;
    };

    void addExpense(vector<Expense>& expenses) {
        Expense expense;
        cout << "Enter expense category: ";
        cin >> expense.category;
        cout << "Enter expense amount: ";
        cin >> expense.amount;
        expenses.push_back(expense);
        cout << "Expense added successfully!" << endl;
    }

    void viewExpenses(const  vector<Expense>& expenses) {
        if (expenses.empty()) {
            cout << "No expenses recorded." << endl;
        } else {
            cout << "Expenses:" << endl;
            for (const auto& expense: expenses) {
                cout << "Category: " << expense.category << ", Amount: " << expense.amount <<  endl;
            }
        }
    }

    double calculateTotalExpense(const  vector<Expense>& expenses) {
        double total = 0.0;
        for (const auto& expense: expenses) {
            total += expense.amount;
        }
        return total;
    }

    int main () {
        vector<Expense> expenses;
        int choice;

        do {
            cout << "\nExpense Tracker Menu:" << endl;
            cout << "1. Add Expense" << endl;
            cout << "2. View Expenses" << endl;
            cout << "3. Calculate Total Expense" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addExpense(expenses);
                    break;
                case 2:
                    viewExpenses(expenses);
                    break;
                case 3:
                    cout << "Total Expense: " << calculateTotalExpense(expenses) << endl;
                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
            }
        } while (choice != 4);

        return 0;
    }

//© FluKM 2023
