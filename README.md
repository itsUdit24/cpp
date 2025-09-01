# cpp
To work on your GitHub repository from your local machine using VS Code, follow out these steps :  

### **Step 1: Clone the Repository to Your Local Machine**  
1. Open **GitHub** and navigate to your repository.  
2. Click the **"Code"** button and copy the repository **HTTPS URL**.  
3. Open **VS Code** and open the terminal (`Ctrl + ~` or `View > Terminal`).  
4. Run the following command to clone the repo:  
   ```sh
   git clone <repository_url>
   ```  
   Example:  
   ```sh
   git clone https://github.com/your-username/your-repo.git
   ```  
5. Navigate into the project folder:  
   ```sh
   cd your-repo
   ```  
6. Open the project in VS Code:  
   ```sh
   code .
   ```  

---

### **Step 2: Make Changes and Commit Them**  
1. Modify or add files in the project using VS Code.  
2. Check the status of your repository:  
   ```sh
   git status
   ```  
3. Stage the changes:  
   ```sh
   git add .
   ```  
4. Commit the changes with a message:  
   ```sh
   git commit -m "Your commit message"
   ```  

---

### **Step 3: Push Changes to GitHub**  
1. Pull the latest changes (to avoid merge conflicts):  
   ```sh
   git pull origin main
   ```  
2. Push your local changes to GitHub:  
   ```sh
   git push origin main
   ```  

---

### **Step 4: Continue Working on Your Repo**  
- Next time, you can directly **pull the latest changes** before working:  
  ```sh
  git pull origin main
  ```  
- After making changes, repeat **Step 2 & Step 3** to commit and push them.

Let me know if you face any issues! 🚀
