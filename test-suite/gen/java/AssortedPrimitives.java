// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primtypes.djinni

public final class AssortedPrimitives {


    /*package*/ final boolean b;

    /*package*/ final byte eight;

    /*package*/ final short sixteen;

    /*package*/ final int thirtytwo;

    /*package*/ final long sixtyfour;

    /*package*/ final float fthirtytwo;

    /*package*/ final double fsixtyfour;

    /*package*/ final Boolean oB;

    /*package*/ final Byte oEight;

    /*package*/ final Short oSixteen;

    /*package*/ final Integer oThirtytwo;

    /*package*/ final Long oSixtyfour;

    /*package*/ final Float oFthirtytwo;

    /*package*/ final Double oFsixtyfour;

    public AssortedPrimitives(
            boolean b,
            byte eight,
            short sixteen,
            int thirtytwo,
            long sixtyfour,
            float fthirtytwo,
            double fsixtyfour,
            Boolean oB,
            Byte oEight,
            Short oSixteen,
            Integer oThirtytwo,
            Long oSixtyfour,
            Float oFthirtytwo,
            Double oFsixtyfour) {
        this.b = b;
        this.eight = eight;
        this.sixteen = sixteen;
        this.thirtytwo = thirtytwo;
        this.sixtyfour = sixtyfour;
        this.fthirtytwo = fthirtytwo;
        this.fsixtyfour = fsixtyfour;
        this.oB = oB;
        this.oEight = oEight;
        this.oSixteen = oSixteen;
        this.oThirtytwo = oThirtytwo;
        this.oSixtyfour = oSixtyfour;
        this.oFthirtytwo = oFthirtytwo;
        this.oFsixtyfour = oFsixtyfour;
    }

    public boolean getB() {
        return b;
    }

    public byte getEight() {
        return eight;
    }

    public short getSixteen() {
        return sixteen;
    }

    public int getThirtytwo() {
        return thirtytwo;
    }

    public long getSixtyfour() {
        return sixtyfour;
    }

    public float getFthirtytwo() {
        return fthirtytwo;
    }

    public double getFsixtyfour() {
        return fsixtyfour;
    }

    public Boolean getOB() {
        return oB;
    }

    public Byte getOEight() {
        return oEight;
    }

    public Short getOSixteen() {
        return oSixteen;
    }

    public Integer getOThirtytwo() {
        return oThirtytwo;
    }

    public Long getOSixtyfour() {
        return oSixtyfour;
    }

    public Float getOFthirtytwo() {
        return oFthirtytwo;
    }

    public Double getOFsixtyfour() {
        return oFsixtyfour;
    }

    @Override
    public boolean equals(Object obj) {
        if (!(obj instanceof AssortedPrimitives)) {
            return false;
        }
        AssortedPrimitives other = (AssortedPrimitives) obj;
        return this.b == other.b &&
                this.eight == other.eight &&
                this.sixteen == other.sixteen &&
                this.thirtytwo == other.thirtytwo &&
                this.sixtyfour == other.sixtyfour &&
                this.fthirtytwo == other.fthirtytwo &&
                this.fsixtyfour == other.fsixtyfour &&
                ((this.oB == null && other.oB == null) || (this.oB != null && this.oB.equals(other.oB))) &&
                ((this.oEight == null && other.oEight == null) || (this.oEight != null && this.oEight.equals(other.oEight))) &&
                ((this.oSixteen == null && other.oSixteen == null) || (this.oSixteen != null && this.oSixteen.equals(other.oSixteen))) &&
                ((this.oThirtytwo == null && other.oThirtytwo == null) || (this.oThirtytwo != null && this.oThirtytwo.equals(other.oThirtytwo))) &&
                ((this.oSixtyfour == null && other.oSixtyfour == null) || (this.oSixtyfour != null && this.oSixtyfour.equals(other.oSixtyfour))) &&
                ((this.oFthirtytwo == null && other.oFthirtytwo == null) || (this.oFthirtytwo != null && this.oFthirtytwo.equals(other.oFthirtytwo))) &&
                ((this.oFsixtyfour == null && other.oFsixtyfour == null) || (this.oFsixtyfour != null && this.oFsixtyfour.equals(other.oFsixtyfour)));
    }

    @Override
    public int hashCode() {
        // Pick an arbitrary non-zero starting value
        int hashCode = 17;
        hashCode = hashCode * 31 + (b ? 1 : 0);
        hashCode = hashCode * 31 + eight;
        hashCode = hashCode * 31 + sixteen;
        hashCode = hashCode * 31 + thirtytwo;
        hashCode = hashCode * 31 + ((int) (sixtyfour ^ (sixtyfour >>> 32)));
        hashCode = hashCode * 31 + Float.floatToIntBits(fthirtytwo);
        hashCode = hashCode * 31 + ((int) (Double.doubleToLongBits(fsixtyfour) ^ (Double.doubleToLongBits(fsixtyfour) >>> 32)));
        hashCode = hashCode * 31 + (oB == null ? 0 : oB.hashCode());
        hashCode = hashCode * 31 + (oEight == null ? 0 : oEight.hashCode());
        hashCode = hashCode * 31 + (oSixteen == null ? 0 : oSixteen.hashCode());
        hashCode = hashCode * 31 + (oThirtytwo == null ? 0 : oThirtytwo.hashCode());
        hashCode = hashCode * 31 + (oSixtyfour == null ? 0 : oSixtyfour.hashCode());
        hashCode = hashCode * 31 + (oFthirtytwo == null ? 0 : oFthirtytwo.hashCode());
        hashCode = hashCode * 31 + (oFsixtyfour == null ? 0 : oFsixtyfour.hashCode());
        return hashCode;
    }
}
