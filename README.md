# Lab Exercise 1 – Git and GitHub

## Objective

The objective of this lab exercise is to understand the basics of **Git and GitHub**, including creating a local Git repository, tracking files, committing changes, connecting the local repository to GitHub, and pushing the project to a remote repository.

---

## Lab Exercise 1 – Git and GitHub

### Step 1: Install Git

Git can be downloaded for free from:

https://www.git-scm.com/

After installing Git, open the **Command Prompt** on Windows.

For macOS and Linux, the built-in Terminal can be used.

---

### Step 2: Verify Git Installation

Check whether Git is installed correctly by running:

```bash
git --version
```

If Git is installed correctly, the command will display the installed Git version.

---

### Step 3: Create a Project Directory

Create a new directory for the project:

```bash
mkdir project-name
```

---

### Step 4: Change the Working Directory

Move into the newly created directory:

```bash
cd project-name
```

---

### Step 5: Configure Git

Configure the Git username:

```bash
git config --global user.name "username"
```

Configure the Git email:

```bash
git config --global user.email "useremail@gmail.com"
```

These details are associated with commits made using Git.

---

### Step 6: Initialize the Git Repository

Initialize the project as a Git repository:

```bash
git init
```

This creates a `.git` directory and enables Git version control for the project.

---

### Step 7: Create a Program

Create a simple program using a text editor and save it inside the project directory.

For example, a C program can be saved as:

```text
Array.c
```

---

### Step 8: Add the File to the Staging Area

Add the program to the Git staging area:

```bash
git add Array.c
```

The file is now staged and ready to be committed.

To check the current status of the repository:

```bash
git status
```

---

### Step 9: Commit the Changes

Create the first commit:

```bash
git commit -m "Initial commit"
```

The commit stores the current version of the project in the local Git repository.

The repository status can be checked again using:

```bash
git status
```

---

# GitHub

## Step 10: Create a GitHub Account

Create a GitHub account using a personal email address and log in to GitHub.

---

## Step 11: Create a GitHub Repository

Create a new repository on GitHub.

The repository can be made **public** for the purpose of this lab exercise.

For this lab, the repository is:

**SE-LAB1**

---

## Step 12: Connect the Local Repository to GitHub

Copy the URL of the GitHub repository and add it as the remote repository:

```bash
git remote add origin https://github.com/AbhayTS1011/SE-LAB1.git
```

The remote repository can be verified using:

```bash
git remote -v
```

---

## Step 13: Set the Main Branch

Rename the current branch to `main`:

```bash
git branch -M main
```

---

## Step 14: Push the Project to GitHub

Push the local repository to the GitHub `main` branch:

```bash
git push -u origin main
```

After the push is completed, open the GitHub repository and refresh the page.

The committed files should now be visible in the repository.

---

# GitHub Actions

GitHub Actions can be used to automate tasks such as building, testing, and checking the project.

For this lab, a workflow is present in:

```text
.github/workflows/
```

The workflow can be viewed from the **Actions** tab of the GitHub repository.

---

# Repository Contents

The repository currently contains the following files:

### `Array.c`

A C program included as part of the Git and GitHub lab exercise.

### `first.py`

A Python program demonstrating a basic machine learning example using linear regression.

### `First.ipynb`

A Jupyter Notebook containing the machine learning example in notebook format.

### `.github/workflows/`

Contains the GitHub Actions workflow configuration used by the repository.

---

# Machine Learning Example

The repository also contains an introductory machine learning example based on **linear regression**.

The Python implementation uses libraries such as:

* `scikit-learn`
* `matplotlib`

## Prerequisites

Install the required Python libraries using:

```bash
pip install scikit-learn matplotlib
```

## Running the Python Program

The Python program can be executed using:

```bash
python first.py
```

The Jupyter Notebook can be opened using Jupyter Notebook or JupyterLab.

---

# Git Commands Used

The main Git commands used during this lab are:

```bash
git --version
git config --global user.name "username"
git config --global user.email "useremail@gmail.com"
git init
git add <filename>
git status
git commit -m "message"
git remote add origin <repository-url>
git branch -M main
git push -u origin main
```

---

# Conclusion

This lab exercise demonstrates the basic workflow of **Git and GitHub**. A local repository was created, files were tracked and committed using Git, and the local repository was connected to GitHub and pushed to the remote `main` branch.

The exercise also provides an introduction to **GitHub Actions** and includes basic Python machine learning examples in the repository.
