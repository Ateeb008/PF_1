#include <stdio.h>
#include <math.h>
 
int main(void) {
    double accuracy, confidence, score;
    int datasetSize, role, status;
    int permissions = 0;
    int canView = 1, canTrain = 2, canTest = 4, canDeploy = 8;
    int allowedToDeploy, ready;
 
    printf("Welcome to the AI Model Checker!\n\n");
 
    printf("How accurate is your model (0 to 100)? ");
    scanf("%lf", &accuracy);
 
    printf("How confident is your model (0 to 100)? ");
    scanf("%lf", &confidence);
 
    printf("How many samples are in your dataset? ");
    scanf("%d", &datasetSize);
 
    printf("Who are you? (1 = Admin, 2 = Developer, 3 = Researcher): ");
    scanf("%d", &role);
 
    printf("What is the model status? (1 = Ready, 2 = Testing, 3 = Training): ");
    scanf("%d", &status);
 
    if (accuracy < 0 || accuracy > 100 || confidence < 0 || confidence > 100 || datasetSize <= 0) {
        printf("\nOops! Those numbers don't look right. Please try again.\n");
        return 1;
    }
 
    switch (role) {
        case 1:
            permissions = canView | canTrain | canTest | canDeploy;
            printf("\nHello, Admin!\n");
            switch (status) {
                case 1: printf("The model is ready, so you can deploy it.\n"); break;
                case 2: printf("The model is being tested, so you can test it.\n"); break;
                case 3: printf("The model is training, so you can keep an eye on it.\n"); break;
                default: printf("That status doesn't exist.\n"); return 1;
            }
            break;
        case 2:
            permissions = canView | canTrain | canTest;
            printf("\nHello, Developer!\n");
            switch (status) {
                case 1: printf("The model is ready, but you can only view and test it.\n"); break;
                case 2: printf("The model is being tested, so you can test it.\n"); break;
                case 3: printf("The model is training, so you can train it.\n"); break;
                default: printf("That status doesn't exist.\n"); return 1;
            }
            break;
        case 3:
            permissions = canView | canTest;
            printf("\nHello, Researcher!\n");
            switch (status) {
                case 1: printf("The model is ready, but you can only view the results.\n"); break;
                case 2: printf("The model is being tested, so you can run experiments.\n"); break;
                case 3: printf("The model is training, so you can only view progress.\n"); break;
                default: printf("That status doesn't exist.\n"); return 1;
            }
            break;
        default:
            printf("\nThat role doesn't exist.\n");
            return 1;
    }
 
    score = (accuracy + confidence) / 2;
    allowedToDeploy = (permissions & canDeploy) != 0;
    ready = accuracy >= 80 && confidence >= 75 && datasetSize >= 1000 && status == 1 && allowedToDeploy;
 
    printf("\n----- Your Model -----\n");
    printf("Accuracy     : %.1f%%\n", accuracy);
    printf("Confidence   : %.1f%%\n", confidence);
    printf("Dataset size : %d samples\n", datasetSize);
    printf("Status       : %s\n", (status == 1) ? "Ready" : (status == 2) ? "Testing" : "Training");
    printf("Can deploy   : %s\n", allowedToDeploy ? "Yes" : "No");
 
    printf("\n----- Score -----\n");
    printf("Model score      : %.1f\n", score);
    printf("Rounded down     : %.0f\n", floor(score));
    printf("Rounded up       : %.0f\n", ceil(score));
    printf("Accuracy vs conf : %.1f apart\n", fabs(accuracy - confidence));
    printf("Geometric mean   : %.1f\n", sqrt(accuracy * confidence));
    printf("Score squared    : %.1f\n", pow(score / 100, 2) * 100);
 
    printf("\n----- Can we deploy? -----\n");
    if (accuracy >= 80) {
        if (confidence >= 75) {
            if (datasetSize >= 1000) {
                if (status == 1) {
                    if (allowedToDeploy) {
                        printf("Yes! Everything looks good.\n");
                    } else {
                        printf("No, you don't have permission to deploy.\n");
                    }
                } else {
                    printf("No, the model is not ready yet.\n");
                }
            } else {
                printf("No, the dataset is too small (need 1000 or more).\n");
            }
        } else {
            printf("No, the confidence is too low (need 75 or more).\n");
        }
    } else {
        printf("No, the accuracy is too low (need 80 or more).\n");
    }
 
    printf("\nFinal answer: %s\n", ready ? "READY FOR DEPLOYMENT" : "NOT READY FOR DEPLOYMENT");
 
    printf("\n----- Memory used -----\n");
    printf("A decimal number takes %zu bytes\n", sizeof(double));
    printf("A whole number takes %zu bytes\n", sizeof(int));
 
    return 0;
}