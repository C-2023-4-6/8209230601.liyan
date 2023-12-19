#include <iostream>

class Student {
private:
    int studentID;
    double score;

public:
    Student(int id, double s) : studentID(id), score(s) {}

    int getStudentID() const {
        return studentID;
    }

    double getScore() const {
        return score;
    }
};

// 函数找出最高成绩者并输出其学号
void findMax(const Student* students, int size) {
    if (size <= 0) {
        std::cout << "Invalid array size." << std::endl;
        return;
    }

    const Student* max = &students[0]; // 假设第一个学生具有最高成绩

    for (int i = 1; i < size; ++i) {
        if (students[i].getScore() > max->getScore()) {
            max = &students[i];
        }
    }

    std::cout << "Student with the highest score:\n";
    std::cout << "Student ID: " << max->getStudentID() << "\n";
    std::cout << "Score: " << max->getScore() << std::endl;
}

int main() {

    Student students[5] = {
        Student(1, 85.5),
        Student(2, 92.3),
        Student(3, 78.8),
        Student(4, 95.2),
        Student(5, 89.7)
    };

    findMax(students, 5);

    return 0;
}