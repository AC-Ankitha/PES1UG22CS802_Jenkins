pipeline {
    agent any
 
    stages {
        stage('Build') {
            steps {
                script {
                  build 'PES1UG22CS802'
                    // Compile the .cpp file using a shell script
                    sh 'g++ main.cpp -o output'
                }
            }
        }
        stage('Test') {
            steps {
                script {
                    // Print the output of the .cpp file using a shell script
                    sh './output'
                }
            }
        }
        stage('Deploy') {
            steps {
                    echo deploy
            }
        }
    }
    
    post {
        always {
            // Display 'pipeline failed' in case of any errors within the pipeline
            error 'Pipeline failed'
        }
    }
}
