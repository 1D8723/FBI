public class JNITest {
   static{
      System.load("/workspaces/nonPoliceAssmbly/emc_calc.so");
   }
   public native void greet();
   public static void main(String[] args) {
      JNITest test = new JNITest();
      test.greet();
   }
}
