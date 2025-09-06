class Employee:
    def __init__(self, name, work_days, salary_per_day):
        self.name = name
        self.work_days = work_days
        self.salary_per_day = salary_per_day

    def compute_salary(self):
        return self.work_days * self.salary_per_day

    def info(self):
        return f"Name: {self.name}, WorkDays: {self.work_days}, Salary: {self.compute_salary()}"


class Department:
    def __init__(self, dept_name):
        self.dept_name = dept_name
        self.employees = []


class Company:
    def __init__(self, name):
        self.name = name
        self.departments = []
        self.manager = None
        self.deputy_managers = []
        self.employees = []

    def total_salary(self):
        return sum(e.compute_salary() for e in self.employees)

    def max_work_days_employee(self):
        if not self.employees:
            return None
        return max(self.employees, key=lambda e: e.work_days)

    def sort_by_salary_descending(self):
        return sorted(self.employees, key=lambda e: e.compute_salary(), reverse=True)

    def employees_with_work_days_less_than_30(self):
        return [e for e in self.employees if e.work_days < 30]


def main():
    company_name = input("Enter the company name: ")
    comp = Company(company_name)

    amount_e = int(input("The amount of employees: "))

    for i in range(amount_e):
        print(f"\nEmployee {i + 1}:")
        name = input("Name: ")
        work_days = int(input("Work days: "))
        salary_per_day = float(input("Salary per day: "))

        emp = Employee(name, work_days, salary_per_day)
        comp.employees.append(emp)

    print(f"\nTotal salary of company: {comp.total_salary()}")

    max_emp = comp.max_work_days_employee()
    if max_emp:
        print(f"Employee with max work days: {max_emp.info()}")

    print("\nEmployees sorted by salary (descending):")
    for e in comp.sort_by_salary_descending():
        print(e.info())

    print("\nEmployees with work days < 30:")
    for e in comp.employees_with_work_days_less_than_30():
        print(e.info())


if __name__ == "__main__":
    main()
