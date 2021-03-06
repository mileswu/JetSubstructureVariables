#ifndef jetsubstructuremomenttools_showerdeconstructiontool_header
#define jetsubstructuremomenttools_showerdeconstructiontool_header

#include "JetSubStructureMomentTools/JetSubStructureMomentToolsBase.h"

class ShowerDeconstructionTool :
  public JetSubStructureMomentToolsBase {
    ASG_TOOL_CLASS(ShowerDeconstructionTool, IJetModifier)
    
    public:
      // Constructor and destructor
      ShowerDeconstructionTool(std::string name);

      int modifyJet(xAOD::Jet &jet) const;
};


#endif
