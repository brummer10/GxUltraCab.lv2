// generated from file '../dkbuild/ultracab//ultracab.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)

#include "unicab_p2_table.h"
#include "unicab_p3_table.h"

namespace ultracab {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec1[2];
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec3[2];
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec4[2];
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	FAUSTFLOAT 	fslider4;
	FAUSTFLOAT	*fslider4_;
	double 	fRec6[2];
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	FAUSTFLOAT 	fslider5;
	FAUSTFLOAT	*fslider5_;
	double 	fRec7[2];
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fConst107;
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fConst111;
	double 	fConst112;
	double 	fConst113;
	double 	fConst114;
	double 	fConst115;
	double 	fConst116;
	double 	fConst117;
	double 	fConst118;
	double 	fConst119;
	double 	fConst120;
	double 	fConst121;
	double 	fConst122;
	double 	fConst123;
	double 	fConst124;
	double 	fRec8[8];
	double 	fConst125;
	double 	fConst126;
	double 	fConst127;
	double 	fConst128;
	double 	fConst129;
	double 	fConst130;
	double 	fConst131;
	double 	fConst132;
	double 	fRec5[4];
	double 	fConst133;
	double 	fRec2[6];
	double 	fConst134;
	double 	fConst135;
	double 	fConst136;
	double 	fConst137;
	double 	fConst138;
	double 	fConst139;
	double 	fConst140;
	double 	fConst141;
	double 	fConst142;
	double 	fConst143;
	double 	fConst144;
	double 	fConst145;
	double 	fConst146;
	double 	fConst147;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "ultracab";
	name = N_("UltraCab");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<8; i++) fRec8[i] = 0;
	for (int i=0; i<4; i++) fRec5[i] = 0;
	for (int i=0; i<6; i++) fRec2[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (1.30593753898407e-20 * fConst0);
	fConst2 = ((fConst0 * (0 - (1.5155948228055e-18 + fConst1))) - 1.34361243156516e-17);
	fConst3 = (1.97869324088496e-17 * fConst0);
	fConst4 = (0 - (2.29635579212954e-15 + fConst3));
	fConst5 = (7.05213323114109e-24 * fConst0);
	fConst6 = (1.20146034478828e-14 + (fConst0 * (1.37704852038183e-15 + (fConst0 * (1.41453771706759e-17 + (fConst0 * (2.21351896213821e-20 + fConst5)))))));
	fConst7 = (1.06850503502138e-20 * fConst0);
	fConst8 = (2.08356528627583e-12 + (fConst0 * (2.14260920914559e-14 + (fConst0 * (3.35354678749475e-17 + fConst7)))));
	fConst9 = (6.41090199144734e-24 * fConst0);
	fConst10 = (1.69798777177283e-13 + (fConst0 * ((fConst0 * (1.81950341749501e-19 - fConst9)) - 3.88945610159028e-16)));
	fConst11 = (9.71348786582931e-21 * fConst0);
	fConst12 = (1.91839471739438e-14 + (fConst0 * (fConst11 - 3.03922383621404e-17)));
	fConst13 = ((fConst0 * (1.5155948228055e-18 - fConst1)) - 1.34361243156516e-17);
	fConst14 = (fConst3 - 2.29635579212954e-15);
	fConst15 = ((fConst0 * (1.37704852038183e-15 + (fConst0 * ((fConst0 * (2.21351896213821e-20 - fConst5)) - 1.41453771706759e-17)))) - 1.20146034478828e-14);
	fConst16 = ((fConst0 * (2.14260920914559e-14 + (fConst0 * (fConst7 - 3.35354678749475e-17)))) - 2.08356528627583e-12);
	fConst17 = (3.91781261695221e-20 * fConst0);
	fConst18 = ((fConst0 * (fConst17 - 1.5155948228055e-18)) - 1.34361243156516e-17);
	fConst19 = (3.52606661557054e-23 * fConst0);
	fConst20 = ((fConst0 * (1.37704852038183e-15 + (fConst0 * (1.41453771706759e-17 + (fConst0 * (fConst19 - 6.64055688641464e-20)))))) - 3.60438103436483e-14);
	fConst21 = (3.20551510506413e-20 * fConst0);
	fConst22 = ((fConst0 * (2.14260920914559e-14 + (fConst0 * (3.35354678749475e-17 - fConst21)))) - 6.25069585882747e-12);
	fConst23 = (2.61187507796814e-20 * fConst0);
	fConst24 = (2.68722486313032e-17 + (fConst0 * (0 - (3.031189645611e-18 + fConst23))));
	fConst25 = (3.95738648176991e-17 * fConst0);
	fConst26 = (4.59271158425909e-15 - fConst25);
	fConst27 = (7.05213323114109e-23 * fConst0);
	fConst28 = ((fConst0 * ((fConst0 * (2.82907543413517e-17 + (fConst0 * (4.42703792427643e-20 - fConst27)))) - 2.75409704076365e-15)) - 2.40292068957655e-14);
	fConst29 = (2.13701007004275e-20 * fConst0);
	fConst30 = ((fConst0 * ((fConst0 * (6.7070935749895e-17 + fConst29)) - 4.28521841829118e-14)) - 4.16713057255165e-12);
	fConst31 = (2.68722486313032e-17 + (fConst0 * (3.031189645611e-18 - fConst23)));
	fConst32 = (4.59271158425909e-15 + fConst25);
	fConst33 = (2.40292068957655e-14 + (fConst0 * ((fConst0 * ((fConst0 * (4.42703792427643e-20 + fConst27)) - 2.82907543413517e-17)) - 2.75409704076365e-15)));
	fConst34 = (4.16713057255165e-12 + (fConst0 * ((fConst0 * (fConst29 - 6.7070935749895e-17)) - 4.28521841829118e-14)));
	fConst35 = ((fConst0 * (1.5155948228055e-18 + fConst17)) - 1.34361243156516e-17);
	fConst36 = (3.60438103436483e-14 + (fConst0 * (1.37704852038183e-15 + (fConst0 * ((fConst0 * (0 - (6.64055688641464e-20 + fConst19))) - 1.41453771706759e-17)))));
	fConst37 = (6.25069585882747e-12 + (fConst0 * (2.14260920914559e-14 + (fConst0 * (0 - (3.35354678749475e-17 + fConst21))))));
	fConst38 = (3.17400864572463e-14 * fConst0);
	fConst39 = (4.09498186317388e-15 + fConst38);
	fConst40 = (1.74570462008599e-15 * fConst0);
	fConst41 = (4.6685430408502e-12 + fConst40);
	fConst42 = (1.58700432286232e-11 * fConst0);
	fConst43 = (3.5920893536613e-13 + fConst42);
	fConst44 = (8.72852310042993e-13 * fConst0);
	fConst45 = (7.47181095180979e-10 + fConst44);
	fConst46 = (4.09498186317388e-15 - fConst38);
	fConst47 = (4.6685430408502e-12 - fConst40);
	fConst48 = (fConst42 - 3.5920893536613e-13);
	fConst49 = (fConst44 - 7.47181095180979e-10);
	fConst50 = (9.52202593717389e-14 * fConst0);
	fConst51 = (fConst50 - 4.09498186317388e-15);
	fConst52 = (5.23711386025796e-15 * fConst0);
	fConst53 = (fConst52 - 4.6685430408502e-12);
	fConst54 = (0 - fConst43);
	fConst55 = (0 - (4.09498186317388e-15 + fConst50));
	fConst56 = (0 - (4.6685430408502e-12 + fConst52));
	fConst57 = (3.5920893536613e-13 - fConst42);
	fConst58 = (7.47181095180979e-10 - fConst44);
	fConst59 = (6.34333828105243e-34 * fConst0);
	fConst60 = (4.97531423255143e-41 + (fConst0 * ((fConst0 * (2.15357487144062e-22 + (fConst0 * (2.05874861589663e-22 + (fConst0 * (9.42552443146541e-26 + (fConst0 * (1.37894463997677e-29 + fConst59)))))))) - 2.62225158815309e-31)));
	fConst61 = (6.64147518026189e-34 * fConst0);
	fConst62 = (1.05783783229799e-27 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.48243393001331e-29 + fConst61))) - 1.24074223386177e-25)) - 5.38610077436916e-22)) - 1.02936035610994e-18)) - 1.07669914751499e-18)));
	fConst63 = ((fConst0 * ((fConst0 * (6.57140815763436e-19 + (fConst0 * (4.43294858325745e-22 + (fConst0 * (1.10910252881109e-25 + (fConst0 * (1.41601917821069e-29 + fConst61)))))))) - 5.13711148822205e-16)) - 5.38349573758449e-16);
	fConst64 = (2.48765711627571e-38 + (fConst0 * ((fConst0 * (1.07678743572267e-19 + (fConst0 * (1.02743609056402e-19 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (1.31551125716624e-29 + fConst59))) - 8.20516324851495e-26)) - 1.38164060423112e-22)))))) - 1.31112579407699e-28)));
	fConst65 = (1.39553442183155e-33 * fConst0);
	fConst66 = (2.69336066855655e-24 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (0 - (3.91148825433117e-29 + fConst65))) - 1.04595772658465e-24)) - 9.6193756032248e-21)) - 2.85036082047303e-17)) - 1.09742701075599e-14)) - 1.14540401045819e-14)));
	fConst67 = (1.46112453965763e-33 * fConst0);
	fConst68 = (5.72655048113701e-11 + (fConst0 * (5.48705984183308e-11 + (fConst0 * (1.46097679732367e-13 + (fConst0 * (5.87124998699329e-17 + (fConst0 * (1.15285405515135e-20 + (fConst0 * (1.15632600171216e-24 + (fConst0 * (4.18042176459154e-29 + fConst67)))))))))))));
	fConst69 = (2.18864484009084e-17 * fConst0);
	fConst70 = (2.18864484009084e-14 - fConst69);
	fConst71 = ((fConst0 * ((fConst0 * ((fConst0 * (2.05874861589663e-22 + (fConst0 * ((fConst0 * (1.37894463997677e-29 - fConst59)) - 9.42552443146541e-26)))) - 2.15357487144062e-22)) - 2.62225158815309e-31)) - 4.97531423255143e-41);
	fConst72 = ((fConst0 * ((fConst0 * (1.02936035610994e-18 + (fConst0 * ((fConst0 * (1.24074223386177e-25 + (fConst0 * (fConst61 - 1.48243393001331e-29)))) - 5.38610077436916e-22)))) - 1.07669914751499e-18)) - 1.05783783229799e-27);
	fConst73 = (5.38349573758449e-16 + (fConst0 * ((fConst0 * ((fConst0 * (4.43294858325745e-22 + (fConst0 * ((fConst0 * (1.41601917821069e-29 - fConst61)) - 1.10910252881109e-25)))) - 6.57140815763436e-19)) - 5.13711148822205e-16)));
	fConst74 = (2.48765711627571e-38 + (fConst0 * (1.31112579407699e-28 + (fConst0 * (1.07678743572267e-19 + (fConst0 * ((fConst0 * ((fConst0 * (8.20516324851495e-26 + (fConst0 * (fConst59 - 1.31551125716624e-29)))) - 1.38164060423112e-22)) - 1.02743609056402e-19)))))));
	fConst75 = (2.69336066855655e-24 + (fConst0 * (1.14540401045819e-14 + (fConst0 * ((fConst0 * (2.85036082047303e-17 + (fConst0 * ((fConst0 * (1.04595772658465e-24 + (fConst0 * (fConst65 - 3.91148825433117e-29)))) - 9.6193756032248e-21)))) - 1.09742701075599e-14)))));
	fConst76 = (5.72655048113701e-11 + (fConst0 * ((fConst0 * (1.46097679732367e-13 + (fConst0 * ((fConst0 * (1.15285405515135e-20 + (fConst0 * ((fConst0 * (4.18042176459154e-29 - fConst67)) - 1.15632600171216e-24)))) - 5.87124998699329e-17)))) - 5.48705984183308e-11)));
	fConst77 = (4.4403367967367e-33 * fConst0);
	fConst78 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (2.82765732943962e-25 + (fConst0 * (fConst77 - 6.89472319988384e-29)))) - 2.05874861589663e-22)) - 2.15357487144062e-22)) - 7.86675476445927e-31)) - 2.48765711627571e-40);
	fConst79 = (4.64903262618332e-33 * fConst0);
	fConst80 = ((fConst0 * ((fConst0 * (1.02936035610994e-18 + (fConst0 * (5.38610077436916e-22 + (fConst0 * ((fConst0 * (7.41216965006657e-29 - fConst79)) - 3.7222267015853e-25)))))) - 3.23009744254498e-18)) - 5.28918916148995e-27);
	fConst81 = (2.69174786879225e-15 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (3.32730758643327e-25 + (fConst0 * (fConst79 - 7.08009589105347e-29)))) - 4.43294858325745e-22)) - 6.57140815763436e-19)) - 1.54113344646662e-15)));
	fConst82 = (1.741359981393e-37 + (fConst0 * (6.55562897038497e-28 + (fConst0 * (3.23036230716802e-19 + (fConst0 * ((fConst0 * (1.38164060423112e-22 + (fConst0 * ((fConst0 * (6.57755628583122e-29 - fConst77)) - 2.46154897455449e-25)))) - 1.02743609056402e-19)))))));
	fConst83 = (9.76874095282084e-33 * fConst0);
	fConst84 = (1.88535246798958e-23 + (fConst0 * (5.72702005229094e-14 + (fConst0 * ((fConst0 * (2.85036082047303e-17 + (fConst0 * (9.6193756032248e-21 + (fConst0 * ((fConst0 * (1.95574412716559e-28 - fConst83)) - 3.13787317975395e-24)))))) - 3.29228103226798e-14)))));
	fConst85 = (1.02278717776034e-32 * fConst0);
	fConst86 = (4.00858533679591e-10 + (fConst0 * ((fConst0 * (4.38293039197102e-13 + (fConst0 * ((fConst0 * ((fConst0 * (3.46897800513648e-24 + (fConst0 * (fConst85 - 2.09021088229577e-28)))) - 1.15285405515135e-20)) - 5.87124998699329e-17)))) - 2.74352992091654e-10)));
	fConst87 = (1.33210103902101e-32 * fConst0);
	fConst88 = ((fConst0 * ((fConst0 * (6.46072461432187e-22 + (fConst0 * ((fConst0 * ((fConst0 * (1.24105017597909e-28 - fConst87)) - 9.42552443146541e-26)) - 6.17624584768987e-22)))) - 2.62225158815309e-31)) - 4.47778280929629e-40);
	fConst89 = (1.394709787855e-32 * fConst0);
	fConst90 = ((fConst0 * ((fConst0 * ((fConst0 * (1.61583023231075e-21 + (fConst0 * (1.24074223386177e-25 + (fConst0 * (fConst89 - 1.33419053701198e-28)))))) - 3.08808106832981e-18)) - 1.07669914751499e-18)) - 9.52054049068191e-27);
	fConst91 = (4.84514616382604e-15 + (fConst0 * ((fConst0 * (1.97142244729031e-18 + (fConst0 * ((fConst0 * ((fConst0 * (1.27441726038962e-28 - fConst89)) - 1.10910252881109e-25)) - 1.32988457497723e-21)))) - 5.13711148822205e-16)));
	fConst92 = (5.224079944179e-37 + (fConst0 * (1.18001321466929e-27 + (fConst0 * (1.07678743572267e-19 + (fConst0 * (3.08230827169205e-19 + (fConst0 * (4.14492181269336e-22 + (fConst0 * (8.20516324851495e-26 + (fConst0 * (fConst87 - 1.18396013144962e-28)))))))))))));
	fConst93 = (2.93062228584625e-32 * fConst0);
	fConst94 = (5.65605740396875e-23 + (fConst0 * (1.03086360941237e-13 + (fConst0 * ((fConst0 * ((fConst0 * (2.88581268096744e-20 + (fConst0 * (1.04595772658465e-24 + (fConst0 * (fConst93 - 3.52033942889805e-28)))))) - 8.5510824614191e-17)) - 1.09742701075599e-14)))));
	fConst95 = (3.06836153328102e-32 * fConst0);
	fConst96 = (1.20257560103877e-09 + (fConst0 * ((fConst0 * (1.46097679732367e-13 + (fConst0 * (1.76137499609799e-16 + (fConst0 * ((fConst0 * ((fConst0 * (3.76237958813238e-28 - fConst95)) - 1.15632600171216e-24)) - 3.45856216545407e-20)))))) - 4.93835385764977e-10)));
	fConst97 = (2.22016839836835e-32 * fConst0);
	fConst98 = ((fConst0 * (1.31112579407655e-30 + (fConst0 * (6.46072461432187e-22 + (fConst0 * (6.17624584768987e-22 + (fConst0 * ((fConst0 * (fConst97 - 6.89472319988384e-29)) - 4.7127622157327e-25)))))))) - 2.48765711627571e-40);
	fConst99 = (2.32451631309166e-32 * fConst0);
	fConst100 = ((fConst0 * (5.38349573757497e-18 + (fConst0 * ((fConst0 * ((fConst0 * (6.20371116930884e-25 + (fConst0 * (7.41216965006657e-29 - fConst99)))) - 1.61583023231075e-21)) - 3.08808106832981e-18)))) - 5.28918916148995e-27);
	fConst101 = (2.69174786879225e-15 + (fConst0 * (2.56855574411103e-15 + (fConst0 * (1.97142244729031e-18 + (fConst0 * (1.32988457497723e-21 + (fConst0 * ((fConst0 * (fConst99 - 7.08009589105347e-29)) - 5.54551264405546e-25)))))))));
	fConst102 = (8.706799906965e-37 + (fConst0 * (6.55562897038497e-28 + (fConst0 * ((fConst0 * (3.08230827169205e-19 + (fConst0 * ((fConst0 * (4.10258162425748e-25 + (fConst0 * (6.57755628583122e-29 - fConst97)))) - 4.14492181269336e-22)))) - 5.38393717861336e-19)))));
	fConst103 = (4.88437047641042e-32 * fConst0);
	fConst104 = (9.42676233994791e-23 + (fConst0 * (5.72702005229094e-14 + (fConst0 * (5.48713505377996e-14 + (fConst0 * ((fConst0 * ((fConst0 * (5.22978863292324e-24 + (fConst0 * (1.95574412716559e-28 - fConst103)))) - 2.88581268096744e-20)) - 8.5510824614191e-17)))))));
	fConst105 = (5.11393588880171e-32 * fConst0);
	fConst106 = (2.00429266839795e-09 + (fConst0 * ((fConst0 * ((fConst0 * (1.76137499609799e-16 + (fConst0 * (3.45856216545407e-20 + (fConst0 * ((fConst0 * (fConst105 - 2.09021088229577e-28)) - 5.78163000856081e-24)))))) - 7.30488398661836e-13)) - 2.74352992091654e-10)));
	fConst107 = (2.48765711627571e-40 + (fConst0 * (1.31112579407655e-30 + (fConst0 * ((fConst0 * (6.17624584768987e-22 + (fConst0 * (4.7127622157327e-25 + (fConst0 * (0 - (6.89472319988384e-29 + fConst97))))))) - 6.46072461432187e-22)))));
	fConst108 = (5.28918916148995e-27 + (fConst0 * (5.38349573757497e-18 + (fConst0 * (3.08808106832981e-18 + (fConst0 * ((fConst0 * ((fConst0 * (7.41216965006657e-29 + fConst99)) - 6.20371116930884e-25)) - 1.61583023231075e-21)))))));
	fConst109 = ((fConst0 * (2.56855574411103e-15 + (fConst0 * ((fConst0 * (1.32988457497723e-21 + (fConst0 * (5.54551264405546e-25 + (fConst0 * (0 - (7.08009589105347e-29 + fConst99))))))) - 1.97142244729031e-18)))) - 2.69174786879225e-15);
	fConst110 = (8.706799906965e-37 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (6.57755628583122e-29 + fConst97)) - 4.10258162425748e-25)) - 4.14492181269336e-22)) - 3.08230827169205e-19)) - 5.38393717861336e-19)) - 6.55562897038497e-28)));
	fConst111 = (9.42676233994791e-23 + (fConst0 * ((fConst0 * (5.48713505377996e-14 + (fConst0 * (8.5510824614191e-17 + (fConst0 * ((fConst0 * ((fConst0 * (1.95574412716559e-28 + fConst103)) - 5.22978863292324e-24)) - 2.88581268096744e-20)))))) - 5.72702005229094e-14)));
	fConst112 = (2.00429266839795e-09 + (fConst0 * (2.74352992091654e-10 + (fConst0 * ((fConst0 * ((fConst0 * (3.45856216545407e-20 + (fConst0 * (5.78163000856081e-24 + (fConst0 * (0 - (2.09021088229577e-28 + fConst105))))))) - 1.76137499609799e-16)) - 7.30488398661836e-13)))));
	fConst113 = (4.47778280929629e-40 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (9.42552443146541e-26 + (fConst0 * (1.24105017597909e-28 + fConst87)))) - 6.17624584768987e-22)) - 6.46072461432187e-22)) - 2.62225158815309e-31)));
	fConst114 = (9.52054049068191e-27 + (fConst0 * ((fConst0 * (3.08808106832981e-18 + (fConst0 * (1.61583023231075e-21 + (fConst0 * ((fConst0 * (0 - (1.33419053701198e-28 + fConst89))) - 1.24074223386177e-25)))))) - 1.07669914751499e-18)));
	fConst115 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.10910252881109e-25 + (fConst0 * (1.27441726038962e-28 + fConst89)))) - 1.32988457497723e-21)) - 1.97142244729031e-18)) - 5.13711148822205e-16)) - 4.84514616382604e-15);
	fConst116 = (5.224079944179e-37 + (fConst0 * ((fConst0 * (1.07678743572267e-19 + (fConst0 * ((fConst0 * (4.14492181269336e-22 + (fConst0 * ((fConst0 * (0 - (1.18396013144962e-28 + fConst87))) - 8.20516324851495e-26)))) - 3.08230827169205e-19)))) - 1.18001321466929e-27)));
	fConst117 = (5.65605740396875e-23 + (fConst0 * ((fConst0 * ((fConst0 * (8.5510824614191e-17 + (fConst0 * (2.88581268096744e-20 + (fConst0 * ((fConst0 * (0 - (3.52033942889805e-28 + fConst93))) - 1.04595772658465e-24)))))) - 1.09742701075599e-14)) - 1.03086360941237e-13)));
	fConst118 = (1.20257560103877e-09 + (fConst0 * (4.93835385764977e-10 + (fConst0 * (1.46097679732367e-13 + (fConst0 * ((fConst0 * ((fConst0 * (1.15632600171216e-24 + (fConst0 * (3.76237958813238e-28 + fConst95)))) - 3.45856216545407e-20)) - 1.76137499609799e-16)))))));
	fConst119 = (2.48765711627571e-40 + (fConst0 * ((fConst0 * (2.15357487144062e-22 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (6.89472319988384e-29 + fConst77))) - 2.82765732943962e-25)) - 2.05874861589663e-22)))) - 7.86675476445927e-31)));
	fConst120 = (5.28918916148995e-27 + (fConst0 * ((fConst0 * ((fConst0 * (5.38610077436916e-22 + (fConst0 * (3.7222267015853e-25 + (fConst0 * (7.41216965006657e-29 + fConst79)))))) - 1.02936035610994e-18)) - 3.23009744254498e-18)));
	fConst121 = ((fConst0 * ((fConst0 * (6.57140815763436e-19 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (7.08009589105347e-29 + fConst79))) - 3.32730758643327e-25)) - 4.43294858325745e-22)))) - 1.54113344646662e-15)) - 2.69174786879225e-15);
	fConst122 = (1.741359981393e-37 + (fConst0 * ((fConst0 * (3.23036230716802e-19 + (fConst0 * (1.02743609056402e-19 + (fConst0 * (1.38164060423112e-22 + (fConst0 * (2.46154897455449e-25 + (fConst0 * (6.57755628583122e-29 + fConst77)))))))))) - 6.55562897038497e-28)));
	fConst123 = (1.88535246798958e-23 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (9.6193756032248e-21 + (fConst0 * (3.13787317975395e-24 + (fConst0 * (1.95574412716559e-28 + fConst83)))))) - 2.85036082047303e-17)) - 3.29228103226798e-14)) - 5.72702005229094e-14)));
	fConst124 = (4.00858533679591e-10 + (fConst0 * (2.74352992091654e-10 + (fConst0 * (4.38293039197102e-13 + (fConst0 * (5.87124998699329e-17 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (2.09021088229577e-28 + fConst85))) - 3.46897800513648e-24)) - 1.15285405515135e-20)))))))));
	fConst125 = (6.56593452027253e-14 - fConst69);
	fConst126 = (6.56593452027253e-17 * fConst0);
	fConst127 = (2.18864484009084e-14 + fConst126);
	fConst128 = (fConst126 - 1.09432242004542e-13);
	fConst129 = (0 - (1.09432242004542e-13 + fConst126));
	fConst130 = (2.18864484009084e-14 - fConst126);
	fConst131 = (6.56593452027253e-14 + fConst69);
	fConst132 = (2.18864484009084e-14 + fConst69);
	fConst133 = faustpower<2>(fConst0);
	fConst134 = (3.20545099572367e-23 * fConst0);
	fConst135 = (1.69798777177283e-13 + (fConst0 * (3.88945610159028e-16 + (fConst0 * (fConst134 - 5.45851025248503e-19)))));
	fConst136 = (2.91404635974879e-20 * fConst0);
	fConst137 = (1.91839471739438e-14 + (fConst0 * (3.03922383621404e-17 - fConst136)));
	fConst138 = (6.41090199144734e-23 * fConst0);
	fConst139 = ((fConst0 * (7.77891220318055e-16 + (fConst0 * (3.63900683499002e-19 - fConst138)))) - 3.39597554354567e-13);
	fConst140 = (1.94269757316586e-20 * fConst0);
	fConst141 = ((fConst0 * (6.07844767242808e-17 + fConst140)) - 3.83678943478876e-14);
	fConst142 = ((fConst0 * ((fConst0 * (3.63900683499002e-19 + fConst138)) - 7.77891220318055e-16)) - 3.39597554354567e-13);
	fConst143 = ((fConst0 * (fConst140 - 6.07844767242808e-17)) - 3.83678943478876e-14);
	fConst144 = (1.69798777177283e-13 + (fConst0 * ((fConst0 * (0 - (5.45851025248503e-19 + fConst134))) - 3.88945610159028e-16)));
	fConst145 = (1.91839471739438e-14 + (fConst0 * (0 - (3.03922383621404e-17 + fConst136))));
	fConst146 = (1.69798777177283e-13 + (fConst0 * (3.88945610159028e-16 + (fConst0 * (1.81950341749501e-19 + fConst9)))));
	fConst147 = (1.91839471739438e-14 + (fConst0 * (3.03922383621404e-17 + fConst11)));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
#define fslider4 (*fslider4_)
#define fslider5 (*fslider5_)
	double 	fSlow0 = (0.00036676987543879196 * (exp((3 * double(fslider0))) - 1));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.00036676987543879196 * (exp((3 * double(fslider2))) - 1));
	double 	fSlow3 = (1.7394381597912113e-05 * (exp((6 * (1 - double(fslider3)))) - 1));
	double 	fSlow4 = (0.007000000000000006 * double(fslider4));
	double 	fSlow5 = (0.00036676987543879196 * (exp((3 * double(fslider5))) - 1));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		fRec1[0] = (fSlow1 + (0.993 * fRec1[1]));
		double fTemp0 = (1.81767568680935e-11 + (fConst0 * (fConst8 + ((fConst6 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst4 + (fConst2 * fRec0[0]))) - 2.03577641146236e-14))))));
		fRec3[0] = (fSlow2 + (0.993 * fRec3[1]));
		fRec4[0] = (fSlow3 + (0.993 * fRec4[1]));
		double fTemp1 = (7.64281973309539e-07 + (fConst0 * (fConst45 + ((fConst43 * fRec3[0]) + (fRec4[0] * (8.71281449572875e-09 + (fConst0 * (fConst41 + (fConst39 * fRec3[0])))))))));
		double fTemp2 = (1.68220418103441e-15 + (3.17397015289512e-14 * fRec3[0]));
		double fTemp3 = (1.58698507644756e-11 * fRec3[0]);
		fRec6[0] = (fSlow4 + (0.993 * fRec6[1]));
		fRec7[0] = (fSlow5 + (0.993 * fRec7[1]));
		double fTemp4 = (fConst68 + ((fConst66 * fRec6[0]) + (fRec7[0] * (5.28918916148995e-25 + ((fConst64 * fRec6[0]) + (fConst0 * (fConst63 + (fRec7[0] * (fConst62 + (fConst60 * fRec6[0]))))))))));
		double fTemp5 = (1.09432242004542e-13 * fRec7[0]);
		fRec8[0] = ((double)input0[i] - ((((((((fRec8[1] * (fConst124 + ((fConst123 * fRec6[0]) + (fRec7[0] * (3.70243241304296e-24 + ((fConst122 * fRec6[0]) + (fConst0 * (fConst121 + (fRec7[0] * (fConst120 + (fConst119 * fRec6[0]))))))))))) + (fRec8[2] * (fConst118 + ((fConst117 * fRec6[0]) + (fRec7[0] * (1.11072972391289e-23 + ((fConst116 * fRec6[0]) + (fConst0 * (fConst115 + (fRec7[0] * (fConst114 + (fConst113 * fRec6[0])))))))))))) + (fRec8[3] * (fConst112 + ((fConst111 * fRec6[0]) + (fRec7[0] * (1.85121620652148e-23 + ((fConst110 * fRec6[0]) + (fConst0 * (fConst109 + (fRec7[0] * (fConst108 + (fConst107 * fRec6[0])))))))))))) + (fRec8[4] * (fConst106 + ((fConst104 * fRec6[0]) + (fRec7[0] * (1.85121620652148e-23 + ((fConst102 * fRec6[0]) + (fConst0 * (fConst101 + (fRec7[0] * (fConst100 + (fConst98 * fRec6[0])))))))))))) + (fRec8[5] * (fConst96 + ((fConst94 * fRec6[0]) + (fRec7[0] * (1.11072972391289e-23 + ((fConst92 * fRec6[0]) + (fConst0 * (fConst91 + (fRec7[0] * (fConst90 + (fConst88 * fRec6[0])))))))))))) + (fRec8[6] * (fConst86 + ((fConst84 * fRec6[0]) + (fRec7[0] * (3.70243241304296e-24 + ((fConst82 * fRec6[0]) + (fConst0 * (fConst81 + (fRec7[0] * (fConst80 + (fConst78 * fRec6[0])))))))))))) + (fRec8[7] * (fConst76 + ((fConst75 * fRec6[0]) + (fRec7[0] * (5.28918916148995e-25 + ((fConst74 * fRec6[0]) + (fConst0 * (fConst73 + (fRec7[0] * (fConst72 + (fConst71 * fRec6[0])))))))))))) / fTemp4));
		double fTemp6 = (3.28296726013626e-13 * fRec7[0]);
		double fTemp7 = (0 - (5.47161210022711e-13 * fRec7[0]));
		fRec5[0] = ((fConst0 * (((((((((fRec8[0] * (5.47161210022711e-11 + (fConst0 * (fConst132 + fTemp5)))) + (fRec8[1] * (2.73580605011355e-10 + (fConst0 * (fConst131 + fTemp6))))) + (fRec8[2] * (4.9244508902044e-10 + (fConst0 * (fConst130 + fTemp5))))) + (fRec8[3] * (2.73580605011355e-10 + (fConst0 * (fConst129 + fTemp7))))) + (fRec8[4] * ((fConst0 * (fConst128 + fTemp7)) - 2.73580605011355e-10))) + (fRec8[5] * ((fConst0 * (fConst127 + fTemp5)) - 4.9244508902044e-10))) + (fRec8[6] * ((fConst0 * (fConst125 + fTemp6)) - 2.73580605011355e-10))) + (fRec8[7] * ((fConst0 * (fConst70 + fTemp5)) - 5.47161210022711e-11))) / fTemp4)) - ((((fRec5[1] * (2.29284591992862e-06 + (fConst0 * (fConst58 + ((fConst57 * fRec3[0]) + (fRec4[0] * (8.71281449572875e-09 + (fConst0 * (fConst56 + (fConst55 * fRec3[0])))))))))) + (fRec5[2] * (2.29284591992862e-06 + (fConst0 * (((fConst54 * fRec3[0]) + (fRec4[0] * ((fConst0 * (fConst53 + (fConst51 * fRec3[0]))) - 8.71281449572875e-09))) - fConst45))))) + (fRec5[3] * (7.64281973309539e-07 + (fConst0 * (fConst49 + ((fConst48 * fRec3[0]) + (fRec4[0] * ((fConst0 * (fConst47 + (fConst46 * fRec3[0]))) - 8.71281449572875e-09)))))))) / fTemp1));
		double fTemp8 = (8.41102090517206e-13 + fTemp3);
		double fTemp9 = (5.04661254310323e-15 + (9.52191045868535e-14 * fRec3[0]));
		fRec2[0] = (unicab_p2clip((fConst133 * (((((fRec5[0] * (8.41102090517206e-13 + (fTemp3 + (fConst0 * (fRec4[0] * fTemp2))))) + (fRec5[1] * ((fConst0 * (fRec4[0] * (0 - fTemp9))) - fTemp8))) + (fRec5[2] * ((fConst0 * (fRec4[0] * fTemp9)) - fTemp8))) + (fRec5[3] * (8.41102090517206e-13 + (fTemp3 + (fConst0 * (fRec4[0] * (0 - fTemp2))))))) / fTemp1))) - ((((((fRec2[1] * (9.08837843404676e-11 + (fConst0 * (fConst37 + ((fConst36 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst14 + (fConst35 * fRec0[0]))) - 6.10732923438708e-14))))))) + (fRec2[2] * (1.81767568680935e-10 + (fConst0 * (fConst34 + ((fConst33 * fRec0[0]) + (fRec1[0] * ((fConst0 * (fConst32 + (fConst31 * fRec0[0]))) - 4.07155282292472e-14)))))))) + (fRec2[3] * (1.81767568680935e-10 + (fConst0 * (fConst30 + ((fConst28 * fRec0[0]) + (fRec1[0] * (4.07155282292472e-14 + (fConst0 * (fConst26 + (fConst24 * fRec0[0]))))))))))) + (fRec2[4] * (9.08837843404676e-11 + (fConst0 * (fConst22 + ((fConst20 * fRec0[0]) + (fRec1[0] * (6.10732923438708e-14 + (fConst0 * (fConst4 + (fConst18 * fRec0[0]))))))))))) + (fRec2[5] * (1.81767568680935e-11 + (fConst0 * (fConst16 + ((fConst15 * fRec0[0]) + (fRec1[0] * (2.03577641146236e-14 + (fConst0 * (fConst14 + (fConst13 * fRec0[0]))))))))))) / fTemp0));
		output0[i] = (FAUSTFLOAT)unicab_p3clip((fConst0 * (((((((fRec2[0] * (1.70858097381046e-12 + (fConst0 * (fConst147 + (fConst146 * fRec0[0]))))) + (fRec2[1] * (5.12574292143137e-12 + (fConst0 * (fConst145 + (fConst144 * fRec0[0])))))) + (fRec2[2] * (3.41716194762091e-12 + (fConst0 * (fConst143 + (fConst142 * fRec0[0])))))) + (fRec2[3] * ((fConst0 * (fConst141 + (fConst139 * fRec0[0]))) - 3.41716194762091e-12))) + (fRec2[4] * ((fConst0 * (fConst137 + (fConst135 * fRec0[0]))) - 5.12574292143137e-12))) + (fRec2[5] * ((fConst0 * (fConst12 + (fConst10 * fRec0[0]))) - 1.70858097381046e-12))) / fTemp0)));
		// post processing
		for (int i=5; i>0; i--) fRec2[i] = fRec2[i-1];
		for (int i=3; i>0; i--) fRec5[i] = fRec5[i-1];
		for (int i=7; i>0; i--) fRec8[i] = fRec8[i-1];
		fRec7[1] = fRec7[0];
		fRec6[1] = fRec6[0];
		fRec4[1] = fRec4[0];
		fRec3[1] = fRec3[0];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
#undef fslider4
#undef fslider5
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case GAIN: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case MIDS: 
		fslider5_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case PUNCH: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case RESONANCE: 
		fslider3_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case SIZE: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TOP: 
		fslider4_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   GAIN, 
   MIDS, 
   PUNCH, 
   RESONANCE, 
   SIZE, 
   TOP, 
} PortIndex;
*/

} // end namespace ultracab
