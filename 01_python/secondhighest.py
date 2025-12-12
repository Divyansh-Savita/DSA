Employee=[]
for i in range(int(input())):
    name=input()
    salary=float(input())
    Employee.append([name,salary])
salaries=sorted({s for _,s in Employee})
second_high=salaries[-2]
names=sorted([name for name,E in Employee if E==second_high])
for nm in names:
    print(nm)