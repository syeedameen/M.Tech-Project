/*
  LIBRARY CODE STARTS HERE
*/


#ifndef FIR_h
#define FIR_h

#define FILTERTAPS 5



class FIR {
public:
  //construct without coefs
  FIR();
  //construct with coefs
  FIR(float newGain, float *newCoefs);

  void setGain(float newGain);

  void setCoefficients(float *newCoefs);

                                                  /* set coefficient at specified index */
  void setCoefficient(int idx, float newCoef);

  float process(float in);

private:
  float values[FILTERTAPS];

  float coef[FILTERTAPS];

                                /* declare gain coefficient to scale the output back to normal */
  float gain;                   /* set to 1 and input unity to see what this needs to be */

  int k;                        /* k stores the index of the current array read to create a circular memory through the array */
};
#endif

