/*****************************************************************************
 * Project: BaBar detector at the SLAC PEP-II B-factory
 * Package: RooFitCore
 *    File: $Id$
 * Authors:
 *   WV, Wouter Verkerke, UC Santa Barbara, verkerke@slac.stanford.edu
 * History:
 *   05-Jun-2001 WV Created initial version
 *
 * Copyright (C) 2001 University of California
 *****************************************************************************/
#ifndef ROO_TRUTH_MODEL
#define ROO_TRUTH_MODEL

#include "RooFitCore/RooResolutionModel.hh"

class RooTruthModel : public RooResolutionModel {
public:

  // Constructors, assignment etc
  inline RooTruthModel() { }
  RooTruthModel(const char *name, const char *title) ; 
  RooTruthModel(const RooTruthModel& other, const char* name=0);
  virtual TObject* clone() const { return new RooTruthModel(*this) ; }
  virtual ~RooTruthModel();
  
  virtual Bool_t isBasisSupported(const char* name) const ;

protected:
  virtual Double_t evaluate(const RooDataSet* dset) const ;

  ClassDef(RooTruthModel,1) // Abstract Resolution Model
};

#endif
