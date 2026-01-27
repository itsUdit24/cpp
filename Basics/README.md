# GIT-GITHUB
- if you want to create a new branch AND check it out at the same time, you can simply type 
  ```
  git checkout -b [yourbranchname]
  ```
or else you had to do in two steps :-
```
git branch [yourbranchname]
git checkout [yourbranchname]
```
### *Merging in Git*
 # **Branches and Merging**
 
 Great! We now know how to commit and branch. Now we need to learn some kind of way of combining the work from two different branches together. This will allow us to branch off, develop a new feature, and then combine it back in.

The first method to combine work that we will examine is git merge. Merging in Git creates a special commit that has two unique parents. A commit with two parents essentially means "I want to include all the work from this parent over here and this one over here, and the set of all their parents."

It's easier with visuals, let's check it out in the next view.
To complete this level, do the following steps:

- Make a new branch called bugFix

- Checkout the bugFix branch with git checkout bugFix

- Commit once


- Go back to main with git checkout

- Commit another time

### *Git Rebase*
The second way of combining work between branches is rebasing. Rebasing essentially takes a set of commits, "copies" them, and plops them down somewhere else.

While this sounds confusing, the advantage of rebasing is that it can be used to make a nice linear sequence of commits. The commit log / history of the repository will be a lot cleaner if only rebasing is allowed.

Let's see it in action...

- Merge the branch bugFix into main with git merge

- Remember, you can always re-display this dialog with "objective"!

To complete this level, do the following

- Checkout a new branch named bugFix
- Commit once
- Go back to main and commit again
- Check out bugFix again and rebase onto main
- Good luck!

### *"Detach yo' HEAD"*
 # **Moving around in Git**
Before we get to some of the more advanced features of Git, it's important to understand different ways to move through the commit tree that represents your project.

Once you're comfortable moving around, your powers with other git commands will be amplified!

### *HEAD*
First we have to talk about "HEAD". HEAD is the symbolic name for the currently checked out commit -- it's essentially what commit you're working on top of.

HEAD always points to the most recent commit which is reflected in the working tree. Most git commands which make changes to the working tree will start by changing HEAD.

Normally HEAD points to a branch name (like bugFix). When you commit, the status of bugFix is altered and this change is visible through HEAD.

Detaching HEAD

Detaching HEAD just means attaching it to a commit instead of a branch. This is what it looks like beforehand:

HEAD -> main -> C1

To complete this level, let's detach HEAD from bugFix and attach it to the commit instead.

Specify this commit by its hash. The hash for each commit is displayed on the circle that represents the commit.

