C compare.f - Input two number, compare them, and print the sum
      PROGRAM COMPARE_INPUT
C     Reads two integers, compares them, and prints the results

      INTEGER A, B, SUM

C     Prompt and read A
      PRINT *, 'Enter value for a:'
      READ *, A

C     Prompt and read B
      PRINT *, 'Enter value for b:'
      READ *, B

      SUM = A + B

C     Conditional check
      IF (A .GT. B) THEN
         PRINT *, 'a is greater than b'
      ELSE
         PRINT *, 'a is less than or equal to b'
      ENDIF

C     Print formatted values
      PRINT *, 'a =', A, ', b =', B, ', a+b =', SUM

      END
      
      
