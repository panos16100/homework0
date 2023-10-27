bandit1:ls
        cat readme
bandit2: ls
          cat ./-
bandit3: ls
         cat "spaces in this filrename"      
         /* με την χρήση του βοηθητικού link που μας δίνεται βρήκα και έμαθα 2 τρόπους για να διαχειριστούμε αρχεία που περιέχουν κενά και συγκεκριμένα είτε με " .."
         είτε με \ για αναπλήρωση των κενών*/
bandit4: ls
         cd inhere/
          ls -a 
          /*για εύρεση κρυφών αρχείων(αρχεία που αρχίζουν απο τελεία) χρησιμοποιούμε το ls -a */
          cat .hidden
bandit5: ls
         cd inhere
         ls
         cat ./-file07 
         /* έψαξα τα αρχεία όλα με την σειρά*/
 bandit6: ls
          cd inhere
          find --help
          find -size 1033c
          cat ./maybehere07/.file2
bandit7: ls
         ls -a
         man grep
         find user bandit7 group bandit6 size 33c
         find user bandit7 -group bandit6 -size 33c
         find  / -user bandit7 -group bandit6 -size 33c
         file /var/lib/dpkg/info/bandit7.password
         cat /var/lib/dpkg/info/bandit7.password
bandit8: ls
         file data.txt
        man grep
        grep "millionth" data.txt
         /*αντιγραφή τον κωδικό δίπλα απο την λέξη millionth*/
        
         
           
         
        
