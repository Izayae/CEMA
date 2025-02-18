#include <PeleLMeX.H>
#include <AMReX_ParmParse.H>

void
PeleLM::readProbParm()
{
  amrex::ParmParse pp("prob");

  std::string type;
  pp.query("P_mean", PeleLM::prob_parm->P_mean);
  pp.query("standoff", PeleLM::prob_parm->standoff);
  pp.query("pertmag", PeleLM::prob_parm->pertmag);
  pp.query("Vin", PeleLM::prob_parm->Vin);
  pp.query("Vcoflow", PeleLM::prob_parm->Vcoflow);
  pp.query("slot_width", PeleLM::prob_parm->slot_width);

  PeleLM::pmf_data.initialize();
}
