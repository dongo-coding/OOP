import java.util.*;

class Employee {
    private String name;
    private int workDays;
    private double salaryPerDay;

    public Employee(String name, int workDays, double salaryPerDay) {
        this.name = name;
        this.workDays = workDays;
        this.salaryPerDay = salaryPerDay;
    }

    public String getName() {
        return name;
    }

    public int getWorkDays() {
        return workDays;
    }

    public double getSalaryPerDay() {
        return salaryPerDay;
    }

    public double computeSalary() {
        return workDays * salaryPerDay;
    }

    public String info() {
        return "Name: " + name + ", WorkDays: " + workDays + ", Salary: " + computeSalary();
    }
}

class Department {
    private String deptName;
    private List<Employee> employees;

    public Department(String deptName) {
        this.deptName = deptName;
        this.employees = new ArrayList<>();
    }

    public String getDeptName() {
        return deptName;
    }

    public List<Employee> getEmployees() {
        return employees;
    }
}

class Company {
    private String name;
    private List<Department> departments;
    private Employee manager;
    private List<Employee> deputyManagers;
    private List<Employee> employees;

    public Company(String name) {
        this.name = name;
        this.departments = new ArrayList<>();
        this.deputyManagers = new ArrayList<>();
        this.employees = new ArrayList<>();
    }

    public String getName() {
        return name;
    }

    public List<Employee> getEmployees() {
        return employees;
    }

    public double totalSalary() {
        double sum = 0;
        for (Employee e : employees) {
            sum += e.computeSalary();
        }
        return sum;
    }

    public Employee maxWorkDaysEmployee() {
        if (employees.isEmpty()) return null;
        return Collections.max(employees, Comparator.comparingInt(Employee::getWorkDays));
    }

    public List<Employee> sortBySalaryDescending() {
        List<Employee> sorted = new ArrayList<>(employees);
        sorted.sort((e1, e2) -> Double.compare(e2.computeSalary(), e1.computeSalary()));
        return sorted;
    }

    public List<Employee> employeesWithWorkDaysLessThan30() {
        List<Employee> result = new ArrayList<>();
        for (Employee e : employees) {
            if (e.getWorkDays() < 30) {
                result.add(e);
            }
        }
        return result;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the company name: ");
        String companyName = sc.nextLine();
        Company comp = new Company(companyName);

        System.out.print("The amount of employees: ");
        int amount_e = Integer.parseInt(sc.nextLine());

        for (int i = 0; i < amount_e; i++) {
            System.out.println("\nEmployee " + (i + 1) + ":");
            System.out.print("Name: ");
            String name = sc.nextLine();
            System.out.print("Work days: ");
            int workDays = Integer.parseInt(sc.nextLine());
            System.out.print("Salary per day: ");
            double salaryPerDay = Double.parseDouble(sc.nextLine());

            Employee emp = new Employee(name, workDays, salaryPerDay);
            comp.getEmployees().add(emp);
        }

        System.out.println("\nTotal salary of company: " + comp.totalSalary());

        Employee maxEmp = comp.maxWorkDaysEmployee();
        if (maxEmp != null) {
            System.out.println("Employee with max work days: " + maxEmp.info());
        }

        System.out.println("\nEmployees sorted by salary (descending):");
        for (Employee e : comp.sortBySalaryDescending()) {
            System.out.println(e.info());
        }

        System.out.println("\nEmployees with work days < 30:");
        for (Employee e : comp.employeesWithWorkDaysLessThan30()) {
            System.out.println(e.info());
        }

        sc.close();
    }
}
