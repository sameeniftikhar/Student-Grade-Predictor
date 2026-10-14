#include <iostream>
using namespace std;

int main() {
    int total_subjects;
    float marks, credit_hours;
    float total_credits = 0;
    float total_quality_points = 0;
    float final_gpa;

    cout << "--- GCUF Grade & CGPA Predictor ---" << endl;
    cout << "How many subjects did you study this semester? ";
    cin >> total_subjects;

    for(int i = 1; i <= total_subjects; i++) {
        cout << "\nEnter marks for Subject " << i << " (out of 100): ";
        cin >> marks;
        cout << "Enter credit hours for Subject " << i << " (e.g., 3 or 4): ";
        cin >> credit_hours;

        float grade_point = 0.0;
        
        // 1. ADD YOUR IF-ELSE GRADING LOGIC HERE
        if (marks >= 85) {
            grade_point = 4.0;
        }
        // Add your else-if statements here...

        // 2. MULTIPLY AND ADD TO TOTALS
        total_quality_points += (grade_point * credit_hours);
        total_credits += credit_hours;
    }

    // 3. CALCULATE FINAL GPA
    final_gpa = total_quality_points / total_credits;
    
    cout << "\n====================================" << endl;
    cout << "Your Total Calculated GPA is: " << final_gpa << endl;
    
    // 4. ADD YOUR PREDICTOR / ADVISORY MESSAGE HERE
    if (final_gpa >= 3.5) {
        cout << "Prediction: Excellent path! Keep it up." << endl;
    }
    // Add other cases here...

    return 0;
}

