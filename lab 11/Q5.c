#include<stdio.h>

struct HospitalRecord
{
    int recordID;
    char wardName[30];
    int daysAdmitted;

    struct PatientInfo{
        int patientID;
        char patientName[50];
        int age;
    }patient;
};

int main(){
    struct HospitalRecord rec =
    {
        5001,
        "Emergency ICU",
        3,
        {901,"Ali Khan", 42}
    };

    struct HospitalRecord *ptr = &rec;
    
    printf("---Hospital Admission Record ---\n");
    printf("Record ID: %d\n",ptr->recordID);
    printf("Ward Name: %s\n", ptr->wardName);
    printf("Days Admitted: %d\n", ptr->daysAdmitted);
    printf("Patient ID: %d\n", ptr->patient.patientID);
    printf("Patient Name: %s\n",ptr->patient.patientName);
    printf("Patient Age: %d\n",ptr->patient.age);
    
 return 0;   
}
