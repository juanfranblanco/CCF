/* 
  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: /mnt/e/everest/verify/kremlin/krml -skip-compilation -no-prefix MerkleTree.New.Low -no-prefix MerkleTree.New.Low.Serialization -add-include "kremlin/internal/compat.h" -bundle Prims,FStar.*,LowStar.*,C,C.*[rename=Merkle_Kremlib] -bundle MerkleTree.New.Low= -bundle MerkleTree.New.Low.Serialization= -bundle *[rename=Merkle_EverCrypt] -library EverCrypt,EverCrypt.* -tmpdir dist/compact/ -ccopt -O3 -ccopt -march=native -ccopt -mtune=native -ccopt -funroll-loops -warn-error +9 -fparentheses -fcurly-braces -fno-shadow -ftail-calls -o libmerkletree.a .output/prims.krml .output/FStar_Pervasives_Native.krml .output/FStar_Pervasives.krml .output/FStar_Mul.krml .output/FStar_Squash.krml .output/FStar_Classical.krml .output/FStar_StrongExcludedMiddle.krml .output/FStar_FunctionalExtensionality.krml .output/FStar_List_Tot_Base.krml .output/FStar_List_Tot_Properties.krml .output/FStar_List_Tot.krml .output/FStar_Seq_Base.krml .output/FStar_Seq_Properties.krml .output/FStar_Seq.krml .output/FStar_Math_Lib.krml .output/FStar_Math_Lemmas.krml .output/FStar_BitVector.krml .output/FStar_UInt.krml .output/FStar_UInt32.krml .output/FStar_Int.krml .output/FStar_Int16.krml .output/Opaque_s.krml .output/Collections_Seqs_s.krml .output/FStar_UInt8.krml .output/Words_s.krml .output/Words_Four_s.krml .output/Words_Two_s.krml .output/Words_Seq_s.krml .output/Types_s.krml .output/TypesNative_s.krml .output/Arch_TypesNative.krml .output/Prop_s.krml .output/Util_Meta.krml .output/FStar_Set.krml .output/FStar_Map.krml .output/X64_Machine_s.krml .output/X64_CPU_Features_s.krml .output/Map16.krml .output/X64_Vale_Xmms.krml .output/X64_Vale_Regs.krml .output/FStar_Float.krml .output/FStar_UInt64.krml .output/FStar_Exn.krml .output/FStar_Preorder.krml .output/FStar_Monotonic_Witnessed.krml .output/FStar_Ghost.krml .output/FStar_ErasedLogic.krml .output/FStar_PropositionalExtensionality.krml .output/FStar_PredicateExtensionality.krml .output/FStar_TSet.krml .output/FStar_Monotonic_Heap.krml .output/FStar_Heap.krml .output/FStar_ST.krml .output/FStar_All.krml .output/FStar_IO.krml .output/Words_Two.krml .output/Collections_Seqs.krml .output/Words_Seq.krml .output/Arch_Types.krml .output/AES_s.krml .output/Math_Poly2_Defs_s.krml .output/Math_Poly2_s.krml .output/Math_Poly2_Bits_s.krml .output/FStar_Monotonic_HyperHeap.krml .output/FStar_Monotonic_HyperStack.krml .output/FStar_HyperStack.krml .output/FStar_HyperStack_ST.krml .output/FStar_HyperStack_All.krml .output/FStar_Kremlin_Endianness.krml .output/FStar_Int64.krml .output/FStar_Int63.krml .output/FStar_Int32.krml .output/FStar_Int8.krml .output/FStar_UInt63.krml .output/FStar_UInt16.krml .output/FStar_Int_Cast.krml .output/FStar_UInt128.krml .output/Spec_Hash_Definitions.krml .output/Spec_Hash_Lemmas0.krml .output/Spec_Hash_PadFinish.krml .output/Spec_Loops.krml .output/FStar_List.krml .output/Spec_SHA2_Constants.krml .output/Spec_SHA2.krml .output/X64_CryptoInstructions_s.krml .output/X64_Bytes_Semantics_s.krml .output/FStar_Char.krml .output/FStar_BaseTypes.krml .output/X64_Taint_Semantics_s.krml .output/X64_Bytes_Semantics.krml .output/FStar_Universe.krml .output/FStar_GSet.krml .output/FStar_ModifiesGen.krml .output/FStar_Range.krml .output/FStar_Reflection_Types.krml .output/FStar_Tactics_Types.krml .output/FStar_Tactics_Result.krml .output/FStar_Tactics_Effect.krml .output/FStar_Tactics_Util.krml .output/FStar_Reflection_Data.krml .output/FStar_Reflection_Const.krml .output/FStar_String.krml .output/FStar_Order.krml .output/FStar_Reflection_Basic.krml .output/FStar_Reflection_Derived.krml .output/FStar_Tactics_Builtins.krml .output/FStar_Reflection_Formula.krml .output/FStar_Reflection_Derived_Lemmas.krml .output/FStar_Reflection.krml .output/FStar_Tactics_Derived.krml .output/FStar_Tactics_Logic.krml .output/FStar_Tactics.krml .output/FStar_BigOps.krml .output/LowStar_Monotonic_Buffer.krml .output/LowStar_BufferView.krml .output/Views.krml .output/LowStar_Buffer.krml .output/LowStar_Modifies.krml .output/LowStar_ModifiesPat.krml .output/Interop.krml .output/X64_Memory.krml .output/BufferViewHelpers.krml .output/X64_BufferViewStore.krml .output/X64_Memory_Sems.krml .output/X64_Vale_State.krml .output/X64_Vale_StateLemmas.krml .output/X64_Vale_Lemmas.krml .output/X64_Print_s.krml .output/X64_Vale_Decls.krml .output/X64_Vale_QuickCode.krml .output/X64_Vale_QuickCodes.krml .output/X64_Taint_Semantics.krml .output/X64_Vale_InsLemmas.krml .output/X64_Vale_InsBasic.krml .output/X64_Cpuid.krml .output/X64_Cpuidstdcall.krml .output/Vale_check_aesni_stdcall.krml .output/Spec_SHA1.krml .output/Spec_MD5.krml .output/Spec_Hash.krml .output/Spec_Hash_Incremental.krml .output/Spec_Hash_Lemmas.krml .output/LowStar_BufferOps.krml .output/C_Loops.krml .output/C_Endianness.krml .output/Hacl_Hash_Lemmas.krml .output/Hacl_Hash_Definitions.krml .output/FStar_Int_Cast_Full.krml .output/Hacl_Hash_PadFinish.krml .output/Hacl_Hash_MD.krml .output/X64_Vale_InsMem.krml .output/X64_Vale_InsVector.krml .output/X64_Stack.krml .output/Workarounds.krml .output/SHA_helpers.krml .output/X64_Vale_InsSha.krml .output/X64_SHA.krml .output/Vale_sha_update_bytes_stdcall.krml .output/Interop_assumptions.krml .output/Sha_update_bytes_stdcall.krml .output/LowStar_ImmutableBuffer.krml .output/Hacl_Hash_Core_SHA2_Constants.krml .output/Hacl_Hash_Core_SHA2.krml .output/Hacl_Hash_SHA2.krml .output/Hacl_Hash_Core_SHA1.krml .output/Hacl_Hash_SHA1.krml .output/Hacl_Hash_Core_MD5.krml .output/Hacl_Hash_MD5.krml .output/C.krml .output/C_String.krml .output/C_Failure.krml .output/FStar_Int128.krml .output/FStar_Int31.krml .output/FStar_UInt31.krml .output/FStar_Integers.krml .output/EverCrypt_StaticConfig.krml .output/Vale_check_sha_stdcall.krml .output/Check_sha_stdcall.krml .output/Check_aesni_stdcall.krml .output/EverCrypt_AutoConfig2.krml .output/EverCrypt_Helpers.krml .output/EverCrypt_Hash.krml .output/LowStar_Vector.krml .output/LowStar_Regional.krml .output/LowStar_RVector.krml .output/FStar_Dyn.krml .output/EverCrypt_Vale.krml .output/EverCrypt_Specs.krml .output/EverCrypt_OpenSSL.krml .output/EverCrypt_Hacl.krml .output/EverCrypt_BCrypt.krml .output/EverCrypt.krml .output/MerkleTree_Spec.krml .output/MerkleTree_New_High.krml .output/LowStar_Regional_Instances.krml .output/MerkleTree_New_Low.krml .output/MerkleTree_New_Low_Serialization.krml
  F* version: d37e991b
  KreMLin version: d8ba3898
 */

#include "MerkleTree_New_Low_Serialization.h"

typedef struct K___bool_uint32_t_s
{
  bool fst;
  uint32_t snd;
}
K___bool_uint32_t;

static K___bool_uint32_t
serialize_bool(bool ok, bool x, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  if (!ok || pos >= sz)
  {
    return ((K___bool_uint32_t){ .fst = false, .snd = (uint32_t)0U });
  }
  else
  {
    uint8_t ite;
    if (x)
    {
      ite = (uint8_t)1U;
    }
    else
    {
      ite = (uint8_t)0U;
    }
    buf1[pos] = ite;
    return ((K___bool_uint32_t){ .fst = true, .snd = pos + (uint32_t)1U });
  }
}

static K___bool_uint32_t
serialize_uint8_t(bool ok, uint8_t x, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  if (!ok || pos >= sz)
  {
    return ((K___bool_uint32_t){ .fst = false, .snd = (uint32_t)0U });
  }
  else
  {
    buf1[pos] = x;
    return ((K___bool_uint32_t){ .fst = true, .snd = pos + (uint32_t)1U });
  }
}

static K___bool_uint32_t
serialize_uint16_t(bool ok, uint16_t x, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  K___bool_uint32_t scrut = serialize_uint8_t(ok, (uint8_t)(x >> (uint32_t)8U), buf1, sz, pos);
  bool ok1 = scrut.fst;
  uint32_t pos1 = scrut.snd;
  return serialize_uint8_t(ok1, (uint8_t)x, buf1, sz, pos1);
}

static K___bool_uint32_t
serialize_uint32_t(bool ok, uint32_t x, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  K___bool_uint32_t
  scrut = serialize_uint16_t(ok, (uint16_t)(x >> (uint32_t)16U), buf1, sz, pos);
  bool ok1 = scrut.fst;
  uint32_t pos1 = scrut.snd;
  return serialize_uint16_t(ok1, (uint16_t)x, buf1, sz, pos1);
}

static K___bool_uint32_t
serialize_uint64_t(bool ok, uint64_t x, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  K___bool_uint32_t
  scrut = serialize_uint32_t(ok, (uint32_t)(x >> (uint32_t)32U), buf1, sz, pos);
  bool ok1 = scrut.fst;
  uint32_t pos1 = scrut.snd;
  return serialize_uint32_t(ok1, (uint32_t)x, buf1, sz, pos1);
}

static K___bool_uint32_t
(*serialize_offset_t)(bool x0, uint64_t x1, uint8_t *x2, uint32_t x3, uint32_t x4) =
  serialize_uint64_t;

static K___bool_uint32_t
serialize_hash_i(
  bool ok0,
  uint8_t *x0,
  uint8_t *buf10,
  uint32_t sz0,
  uint32_t pos0,
  uint32_t i10
)
{
  bool ok = ok0;
  uint8_t *x = x0;
  uint8_t *buf1 = buf10;
  uint32_t sz = sz0;
  uint32_t pos = pos0;
  uint32_t i1 = i10;
  while (true)
  {
    if (!ok || pos >= sz)
    {
      return ((K___bool_uint32_t){ .fst = false, .snd = (uint32_t)0U });
    }
    else
    {
      K___bool_uint32_t scrut = serialize_uint8_t(ok, x[i1], buf1, sz, pos);
      bool ok1 = scrut.fst;
      uint32_t pos1 = scrut.snd;
      uint32_t j = i1 + (uint32_t)1U;
      if (j < hash_size)
      {
        ok = ok1;
        pos = pos1;
        i1 = j;
      }
      else
      {
        return ((K___bool_uint32_t){ .fst = ok1, .snd = pos1 });
      }
    }
  }
  KRML_HOST_PRINTF("KreMLin abort at %s:%d\n%s\n",
    __FILE__,
    __LINE__,
    "unreachable, returns inserted above");
  KRML_HOST_EXIT(255U);
}

static K___bool_uint32_t
serialize_hash(bool ok, uint8_t *x, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  if (!ok || pos >= sz)
  {
    return ((K___bool_uint32_t){ .fst = false, .snd = (uint32_t)0U });
  }
  else
  {
    return serialize_hash_i(ok, x, buf1, sz, pos, (uint32_t)0U);
  }
}

static K___bool_uint32_t
serialize_hash_vec_i(
  bool ok0,
  LowStar_Vector_vector_str__uint8_t_ x0,
  uint8_t *buf10,
  uint32_t sz0,
  uint32_t pos0,
  uint32_t i10
)
{
  bool ok = ok0;
  LowStar_Vector_vector_str__uint8_t_ x = x0;
  uint8_t *buf1 = buf10;
  uint32_t sz = sz0;
  uint32_t pos = pos0;
  uint32_t i1 = i10;
  while (true)
  {
    if (!ok || pos >= sz)
    {
      return ((K___bool_uint32_t){ .fst = false, .snd = (uint32_t)0U });
    }
    else
    {
      uint8_t *vi = LowStar_Vector_index__uint8_t_(x, i1);
      K___bool_uint32_t scrut = serialize_hash(ok, vi, buf1, sz, pos);
      bool ok1 = scrut.fst;
      uint32_t pos1 = scrut.snd;
      uint32_t j = i1 + (uint32_t)1U;
      if (j < x.sz)
      {
        ok = ok1;
        pos = pos1;
        i1 = j;
      }
      else
      {
        return ((K___bool_uint32_t){ .fst = ok1, .snd = pos1 });
      }
    }
  }
  KRML_HOST_PRINTF("KreMLin abort at %s:%d\n%s\n",
    __FILE__,
    __LINE__,
    "unreachable, returns inserted above");
  KRML_HOST_EXIT(255U);
}

static K___bool_uint32_t
serialize_hash_vec(
  bool ok,
  LowStar_Vector_vector_str__uint8_t_ x,
  uint8_t *buf1,
  uint32_t sz,
  uint32_t pos
)
{
  if (!ok || pos >= sz)
  {
    return ((K___bool_uint32_t){ .fst = false, .snd = (uint32_t)0U });
  }
  else
  {
    K___bool_uint32_t scrut = serialize_uint32_t(ok, x.sz, buf1, sz, pos);
    bool ok1 = scrut.fst;
    uint32_t pos1 = scrut.snd;
    if (ok1 && x.sz > (uint32_t)0U)
    {
      return serialize_hash_vec_i(ok1, x, buf1, sz, pos1, (uint32_t)0U);
    }
    else
    {
      return ((K___bool_uint32_t){ .fst = ok1, .snd = pos1 });
    }
  }
}

static uint64_t
hash_vv_bytes_i(
  LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_ vv1,
  uint32_t i1
)
{
  if (i1 >= vv1.sz)
  {
    return (uint64_t)4U;
  }
  else
  {
    LowStar_Vector_vector_str__uint8_t_
    vvi = LowStar_Vector_index__LowStar_Vector_vector_str_uint8_t_(vv1, i1);
    uint64_t r = (uint64_t)4U + (uint64_t)vvi.sz * (uint64_t)hash_size;
    uint64_t rest = hash_vv_bytes_i(vv1, i1 + (uint32_t)1U);
    if (uint64_max - rest < r)
    {
      return uint64_max;
    }
    else
    {
      return rest + r;
    }
  }
}

static uint64_t
hash_vv_bytes(LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_ vv1)
{
  return hash_vv_bytes_i(vv1, (uint32_t)0U);
}

static K___bool_uint32_t
serialize_hash_vv_i(
  bool ok0,
  LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_ x0,
  uint8_t *buf10,
  uint32_t sz0,
  uint32_t pos0,
  uint32_t i10
)
{
  bool ok = ok0;
  LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_ x = x0;
  uint8_t *buf1 = buf10;
  uint32_t sz = sz0;
  uint32_t pos = pos0;
  uint32_t i1 = i10;
  while (true)
  {
    if (!ok || pos >= sz)
    {
      return ((K___bool_uint32_t){ .fst = false, .snd = (uint32_t)0U });
    }
    else
    {
      LowStar_Vector_vector_str__uint8_t_
      vi = LowStar_Vector_index__LowStar_Vector_vector_str_uint8_t_(x, i1);
      K___bool_uint32_t scrut = serialize_hash_vec(ok, vi, buf1, sz, pos);
      bool ok1 = scrut.fst;
      uint32_t pos1 = scrut.snd;
      uint32_t j = i1 + (uint32_t)1U;
      if (j < x.sz)
      {
        ok = ok1;
        pos = pos1;
        i1 = j;
      }
      else
      {
        return ((K___bool_uint32_t){ .fst = ok1, .snd = pos1 });
      }
    }
  }
  KRML_HOST_PRINTF("KreMLin abort at %s:%d\n%s\n",
    __FILE__,
    __LINE__,
    "unreachable, returns inserted above");
  KRML_HOST_EXIT(255U);
}

static K___bool_uint32_t
serialize_hash_vv(
  bool ok,
  LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_ x,
  uint8_t *buf1,
  uint32_t sz,
  uint32_t pos
)
{
  if (!ok || pos >= sz)
  {
    return ((K___bool_uint32_t){ .fst = false, .snd = (uint32_t)0U });
  }
  else
  {
    K___bool_uint32_t scrut = serialize_uint32_t(ok, x.sz, buf1, sz, pos);
    bool ok1 = scrut.fst;
    uint32_t pos1 = scrut.snd;
    if (x.sz > (uint32_t)0U)
    {
      return serialize_hash_vv_i(ok1, x, buf1, sz, pos1, (uint32_t)0U);
    }
    else
    {
      return ((K___bool_uint32_t){ .fst = ok1, .snd = pos1 });
    }
  }
}

typedef struct K___bool_uint32_t_bool_s
{
  bool fst;
  uint32_t snd;
  bool thd;
}
K___bool_uint32_t_bool;

static K___bool_uint32_t_bool
deserialize_bool(bool ok, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  if (!ok || pos >= sz)
  {
    return ((K___bool_uint32_t_bool){ .fst = false, .snd = pos, .thd = false });
  }
  else
  {
    bool sw;
    switch (buf1[pos])
    {
      case 0U:
        {
          sw = false;
          break;
        }
      default:
        {
          sw = true;
        }
    }
    return ((K___bool_uint32_t_bool){ .fst = true, .snd = pos + (uint32_t)1U, .thd = sw });
  }
}

typedef struct K___bool_uint32_t_uint8_t_s
{
  bool fst;
  uint32_t snd;
  uint8_t thd;
}
K___bool_uint32_t_uint8_t;

static K___bool_uint32_t_uint8_t
deserialize_uint8_t(bool ok, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  if (!ok || pos >= sz)
  {
    return ((K___bool_uint32_t_uint8_t){ .fst = false, .snd = pos, .thd = (uint8_t)0U });
  }
  else
  {
    return
      ((K___bool_uint32_t_uint8_t){ .fst = true, .snd = pos + (uint32_t)1U, .thd = buf1[pos] });
  }
}

typedef struct K___bool_uint32_t_uint16_t_s
{
  bool fst;
  uint32_t snd;
  uint16_t thd;
}
K___bool_uint32_t_uint16_t;

static K___bool_uint32_t_uint16_t
deserialize_uint16_t(bool ok, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  if (!ok || pos >= sz)
  {
    return ((K___bool_uint32_t_uint16_t){ .fst = false, .snd = pos, .thd = (uint16_t)0U });
  }
  else
  {
    K___bool_uint32_t_uint8_t scrut0 = deserialize_uint8_t(ok, buf1, sz, pos);
    bool ok1 = scrut0.fst;
    uint32_t pos1 = scrut0.snd;
    uint8_t b0 = scrut0.thd;
    K___bool_uint32_t_uint8_t scrut = deserialize_uint8_t(ok1, buf1, sz, pos1);
    bool ok2 = scrut.fst;
    uint32_t pos2 = scrut.snd;
    uint8_t b1 = scrut.thd;
    return
      (
        (K___bool_uint32_t_uint16_t){
          .fst = ok2,
          .snd = pos2,
          .thd = ((uint16_t)b0 << (uint32_t)8U) + (uint16_t)b1
        }
      );
  }
}

typedef struct K___bool_uint32_t_uint32_t_s
{
  bool fst;
  uint32_t snd;
  uint32_t thd;
}
K___bool_uint32_t_uint32_t;

static K___bool_uint32_t_uint32_t
deserialize_uint32_t(bool ok, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  if (!ok || pos >= sz)
  {
    return ((K___bool_uint32_t_uint32_t){ .fst = false, .snd = pos, .thd = (uint32_t)0U });
  }
  else
  {
    K___bool_uint32_t_uint16_t scrut0 = deserialize_uint16_t(ok, buf1, sz, pos);
    bool ok1 = scrut0.fst;
    uint32_t pos1 = scrut0.snd;
    uint16_t b0 = scrut0.thd;
    K___bool_uint32_t_uint16_t scrut = deserialize_uint16_t(ok1, buf1, sz, pos1);
    bool ok2 = scrut.fst;
    uint32_t pos2 = scrut.snd;
    uint16_t b1 = scrut.thd;
    return
      (
        (K___bool_uint32_t_uint32_t){
          .fst = ok2,
          .snd = pos2,
          .thd = ((uint32_t)b0 << (uint32_t)16U) + (uint32_t)b1
        }
      );
  }
}

typedef struct K___bool_uint32_t_uint64_t_s
{
  bool fst;
  uint32_t snd;
  uint64_t thd;
}
K___bool_uint32_t_uint64_t;

static K___bool_uint32_t_uint64_t
deserialize_uint64_t(bool ok, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  if (!ok || pos >= sz)
  {
    return ((K___bool_uint32_t_uint64_t){ .fst = false, .snd = pos, .thd = (uint64_t)0U });
  }
  else
  {
    K___bool_uint32_t_uint32_t scrut0 = deserialize_uint32_t(ok, buf1, sz, pos);
    bool ok1 = scrut0.fst;
    uint32_t pos1 = scrut0.snd;
    uint32_t b0 = scrut0.thd;
    K___bool_uint32_t_uint32_t scrut = deserialize_uint32_t(ok1, buf1, sz, pos1);
    bool ok2 = scrut.fst;
    uint32_t pos2 = scrut.snd;
    uint32_t b1 = scrut.thd;
    return
      (
        (K___bool_uint32_t_uint64_t){
          .fst = ok2,
          .snd = pos2,
          .thd = ((uint64_t)b0 << (uint32_t)32U) + (uint64_t)b1
        }
      );
  }
}

static K___bool_uint32_t_uint64_t
(*deserialize_offset_t)(bool x0, uint8_t *x1, uint32_t x2, uint32_t x3) = deserialize_uint64_t;

static K___bool_uint32_t_uint32_t
(*deserialize_index_t)(bool x0, uint8_t *x1, uint32_t x2, uint32_t x3) = deserialize_uint32_t;

typedef struct K___bool_uint32_t_uint8_t__s
{
  bool fst;
  uint32_t snd;
  uint8_t *thd;
}
K___bool_uint32_t_uint8_t_;

static K___bool_uint32_t_uint8_t_
deserialize_hash(bool ok, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  if (!ok || pos >= sz)
  {
    LowStar_Regional_regional__uint8_t_
    x0 = { .dummy = NULL, .r_alloc = hash_r_alloc, .r_free = hash_r_free };
    return ((K___bool_uint32_t_uint8_t_){ .fst = false, .snd = pos, .thd = x0.dummy });
  }
  else
  {
    if (sz - pos < hash_size)
    {
      LowStar_Regional_regional__uint8_t_
      x0 = { .dummy = NULL, .r_alloc = hash_r_alloc, .r_free = hash_r_free };
      return ((K___bool_uint32_t_uint8_t_){ .fst = false, .snd = pos, .thd = x0.dummy });
    }
    else
    {
      LowStar_Regional_regional__uint8_t_
      x0 = { .dummy = NULL, .r_alloc = hash_r_alloc, .r_free = hash_r_free };
      uint8_t *hash1 = x0.r_alloc();
      memcpy(hash1, buf1 + pos, hash_size * sizeof buf1[0U]);
      return ((K___bool_uint32_t_uint8_t_){ .fst = true, .snd = pos + hash_size, .thd = hash1 });
    }
  }
}

static K___bool_uint32_t
deserialize_hash_vec_i(
  bool ok0,
  uint8_t *buf10,
  uint32_t sz0,
  uint32_t pos0,
  LowStar_Vector_vector_str__uint8_t_ res0,
  uint32_t i10
)
{
  bool ok = ok0;
  uint8_t *buf1 = buf10;
  uint32_t sz = sz0;
  uint32_t pos = pos0;
  LowStar_Vector_vector_str__uint8_t_ res = res0;
  uint32_t i1 = i10;
  while (true)
  {
    if (!ok || pos >= sz)
    {
      return ((K___bool_uint32_t){ .fst = false, .snd = pos });
    }
    else
    {
      K___bool_uint32_t_uint8_t_ scrut = deserialize_hash(ok, buf1, sz, pos);
      bool ok1 = scrut.fst;
      uint32_t pos1 = scrut.snd;
      uint8_t *h1 = scrut.thd;
      if (!ok1)
      {
        return ((K___bool_uint32_t){ .fst = false, .snd = pos1 });
      }
      else
      {
        LowStar_Vector_assign__uint8_t_(res, i1, h1);
        uint32_t j = i1 + (uint32_t)1U;
        if (j < res.sz)
        {
          ok = ok1;
          pos = pos1;
          i1 = j;
        }
        else
        {
          return ((K___bool_uint32_t){ .fst = true, .snd = pos1 });
        }
      }
    }
  }
  KRML_HOST_PRINTF("KreMLin abort at %s:%d\n%s\n",
    __FILE__,
    __LINE__,
    "unreachable, returns inserted above");
  KRML_HOST_EXIT(255U);
}

static LowStar_Vector_vector_str__uint8_t_
LowStar_Vector_alloc__uint8_t_(uint32_t len1, uint8_t *v1)
{
  return LowStar_Vector_alloc_rid__uint8_t_(len1, v1);
}

typedef struct K___bool_uint32_t_LowStar_Vector_vector_str__uint8_t__s
{
  bool fst;
  uint32_t snd;
  LowStar_Vector_vector_str__uint8_t_ thd;
}
K___bool_uint32_t_LowStar_Vector_vector_str__uint8_t_;

static K___bool_uint32_t_LowStar_Vector_vector_str__uint8_t_
deserialize_hash_vec(bool ok, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  if (!ok || pos >= sz)
  {
    LowStar_Regional_regional__LowStar_Vector_vector_str__uint8_t_
    scrut = { .dummy = hash_vec_dummy, .r_alloc = hash_vec_r_alloc, .r_free = hash_vec_r_free };
    return
      (
        (K___bool_uint32_t_LowStar_Vector_vector_str__uint8_t_){
          .fst = false,
          .snd = pos,
          .thd = scrut.dummy
        }
      );
  }
  else
  {
    K___bool_uint32_t_uint32_t scrut0 = deserialize_uint32_t(ok, buf1, sz, pos);
    bool ok1 = scrut0.fst;
    uint32_t pos1 = scrut0.snd;
    uint32_t n1 = scrut0.thd;
    if (!ok1)
    {
      return
        (
          (K___bool_uint32_t_LowStar_Vector_vector_str__uint8_t_){
            .fst = false,
            .snd = pos1,
            .thd = { .sz = (uint32_t)0U, .cap = (uint32_t)0U, .vs = NULL }
          }
        );
    }
    else
    {
      if (n1 == (uint32_t)0U)
      {
        return
          (
            (K___bool_uint32_t_LowStar_Vector_vector_str__uint8_t_){
              .fst = true,
              .snd = pos1,
              .thd = { .sz = (uint32_t)0U, .cap = (uint32_t)0U, .vs = NULL }
            }
          );
      }
      else
      {
        LowStar_Regional_regional__uint8_t_
        x0 = { .dummy = NULL, .r_alloc = hash_r_alloc, .r_free = hash_r_free };
        LowStar_Vector_vector_str__uint8_t_ res = LowStar_Vector_alloc__uint8_t_(n1, x0.dummy);
        K___bool_uint32_t scrut = deserialize_hash_vec_i(ok1, buf1, sz, pos1, res, (uint32_t)0U);
        bool ok2 = scrut.fst;
        uint32_t pos2 = scrut.snd;
        return
          (
            (K___bool_uint32_t_LowStar_Vector_vector_str__uint8_t_){
              .fst = ok2,
              .snd = pos2,
              .thd = res
            }
          );
      }
    }
  }
}

static K___bool_uint32_t
deserialize_hash_vv_i(
  bool ok0,
  uint8_t *buf10,
  uint32_t sz0,
  uint32_t pos0,
  LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_ res0,
  uint32_t i10
)
{
  bool ok = ok0;
  uint8_t *buf1 = buf10;
  uint32_t sz = sz0;
  uint32_t pos = pos0;
  LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_ res = res0;
  uint32_t i1 = i10;
  while (true)
  {
    if (!ok || pos >= sz)
    {
      return ((K___bool_uint32_t){ .fst = false, .snd = (uint32_t)0U });
    }
    else
    {
      K___bool_uint32_t_LowStar_Vector_vector_str__uint8_t_
      scrut = deserialize_hash_vec(ok, buf1, sz, pos);
      bool ok1 = scrut.fst;
      uint32_t pos1 = scrut.snd;
      LowStar_Vector_vector_str__uint8_t_ hv = scrut.thd;
      if (!ok1)
      {
        return ((K___bool_uint32_t){ .fst = false, .snd = pos1 });
      }
      else
      {
        LowStar_Vector_assign__LowStar_Vector_vector_str_uint8_t_(res, i1, hv);
        uint32_t j = i1 + (uint32_t)1U;
        if (j == res.sz)
        {
          return ((K___bool_uint32_t){ .fst = true, .snd = pos1 });
        }
        else
        {
          ok = ok1;
          pos = pos1;
          i1 = j;
        }
      }
    }
  }
  KRML_HOST_PRINTF("KreMLin abort at %s:%d\n%s\n",
    __FILE__,
    __LINE__,
    "unreachable, returns inserted above");
  KRML_HOST_EXIT(255U);
}

static LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_
LowStar_Vector_alloc__LowStar_Vector_vector_str_uint8_t_(
  uint32_t len1,
  LowStar_Vector_vector_str__uint8_t_ v1
)
{
  return LowStar_Vector_alloc_rid__LowStar_Vector_vector_str_uint8_t_(len1, v1);
}

typedef struct
K___bool_uint32_t_LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t__s
{
  bool fst;
  uint32_t snd;
  LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_ thd;
}
K___bool_uint32_t_LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_;

static K___bool_uint32_t_LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_
deserialize_hash_vv(bool ok, uint8_t *buf1, uint32_t sz, uint32_t pos)
{
  if (!ok || pos >= sz)
  {
    return
      (
        (K___bool_uint32_t_LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_){
          .fst = false,
          .snd = pos,
          .thd = { .sz = (uint32_t)0U, .cap = (uint32_t)0U, .vs = NULL }
        }
      );
  }
  else
  {
    K___bool_uint32_t_uint32_t scrut0 = deserialize_uint32_t(ok, buf1, sz, pos);
    bool ok1 = scrut0.fst;
    uint32_t pos1 = scrut0.snd;
    uint32_t n1 = scrut0.thd;
    if (!ok1)
    {
      return
        (
          (K___bool_uint32_t_LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_){
            .fst = false,
            .snd = pos1,
            .thd = { .sz = (uint32_t)0U, .cap = (uint32_t)0U, .vs = NULL }
          }
        );
    }
    else
    {
      if (n1 == (uint32_t)0U)
      {
        return
          (
            (K___bool_uint32_t_LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_){
              .fst = true,
              .snd = pos1,
              .thd = { .sz = (uint32_t)0U, .cap = (uint32_t)0U, .vs = NULL }
            }
          );
      }
      else
      {
        LowStar_Regional_regional__LowStar_Vector_vector_str__uint8_t_
        scrut1 = { .dummy = hash_vec_dummy, .r_alloc = hash_vec_r_alloc, .r_free = hash_vec_r_free };
        LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_
        res = LowStar_Vector_alloc__LowStar_Vector_vector_str_uint8_t_(n1, scrut1.dummy);
        K___bool_uint32_t scrut = deserialize_hash_vv_i(ok1, buf1, sz, pos1, res, (uint32_t)0U);
        bool ok2 = scrut.fst;
        uint32_t pos2 = scrut.snd;
        return
          (
            (K___bool_uint32_t_LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_){
              .fst = ok2,
              .snd = pos2,
              .thd = res
            }
          );
      }
    }
  }
}

uint64_t mt_serialize_size(merkle_tree *mt)
{
  merkle_tree mtv = *mt;
  LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_ hs = mtv.hs;
  LowStar_Vector_vector_str__uint8_t_ rhs = mtv.rhs;
  uint64_t hs_sz = hash_vv_bytes(hs);
  if (hs_sz < (uint64_t)4294967295U)
  {
    return
      (uint64_t)21U
      + hs_sz
      + (uint64_t)1U
      + (uint64_t)4U + (uint64_t)rhs.sz * (uint64_t)hash_size
      + (uint64_t)hash_size;
  }
  else
  {
    return uint64_max;
  }
}

uint32_t mt_serialize(merkle_tree *mt, uint8_t *output, uint32_t sz)
{
  merkle_tree mtv = *mt;
  K___bool_uint32_t scrut = serialize_uint8_t(true, (uint8_t)0U, output, sz, (uint32_t)0U);
  bool ok = scrut.fst;
  uint32_t pos = scrut.snd;
  K___bool_uint32_t scrut0 = serialize_uint32_t(ok, hash_size, output, sz, pos);
  bool ok1 = scrut0.fst;
  uint32_t pos1 = scrut0.snd;
  K___bool_uint32_t scrut1 = serialize_offset_t(ok1, mtv.offset, output, sz, pos1);
  bool ok2 = scrut1.fst;
  uint32_t pos2 = scrut1.snd;
  K___bool_uint32_t scrut2 = serialize_uint32_t(ok2, mtv.i, output, sz, pos2);
  bool ok3 = scrut2.fst;
  uint32_t pos3 = scrut2.snd;
  K___bool_uint32_t scrut3 = serialize_uint32_t(ok3, mtv.j, output, sz, pos3);
  bool ok4 = scrut3.fst;
  uint32_t pos4 = scrut3.snd;
  K___bool_uint32_t scrut4 = serialize_hash_vv(ok4, mtv.hs, output, sz, pos4);
  bool ok5 = scrut4.fst;
  uint32_t pos5 = scrut4.snd;
  K___bool_uint32_t scrut5 = serialize_bool(ok5, mtv.rhs_ok, output, sz, pos5);
  bool ok6 = scrut5.fst;
  uint32_t pos6 = scrut5.snd;
  K___bool_uint32_t scrut6 = serialize_hash_vec(ok6, mtv.rhs, output, sz, pos6);
  bool ok7 = scrut6.fst;
  uint32_t pos7 = scrut6.snd;
  K___bool_uint32_t scrut7 = serialize_hash(ok7, mtv.mroot, output, sz, pos7);
  bool ok8 = scrut7.fst;
  uint32_t pos8 = scrut7.snd;
  if (ok8)
  {
    return pos8;
  }
  else
  {
    return (uint32_t)0U;
  }
}

merkle_tree *mt_deserialize(uint8_t *input, uint32_t sz)
{
  K___bool_uint32_t_uint8_t scrut0 = deserialize_uint8_t(true, input, sz, (uint32_t)0U);
  bool ok = scrut0.fst;
  uint32_t pos = scrut0.snd;
  K___bool_uint32_t_uint32_t scrut1 = deserialize_uint32_t(ok, input, sz, pos);
  bool ok1 = scrut1.fst;
  uint32_t pos1 = scrut1.snd;
  uint32_t hash_size1 = scrut1.thd;
  K___bool_uint32_t_uint64_t scrut2 = deserialize_offset_t(ok1, input, sz, pos1);
  bool ok2 = scrut2.fst;
  uint32_t pos2 = scrut2.snd;
  uint64_t offset1 = scrut2.thd;
  K___bool_uint32_t_uint32_t scrut3 = deserialize_index_t(ok2, input, sz, pos2);
  bool ok3 = scrut3.fst;
  uint32_t pos3 = scrut3.snd;
  uint32_t i1 = scrut3.thd;
  K___bool_uint32_t_uint32_t scrut4 = deserialize_index_t(ok3, input, sz, pos3);
  bool ok4 = scrut4.fst;
  uint32_t pos4 = scrut4.snd;
  uint32_t j = scrut4.thd;
  K___bool_uint32_t_LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_
  scrut5 = deserialize_hash_vv(ok4, input, sz, pos4);
  bool ok5 = scrut5.fst;
  uint32_t pos5 = scrut5.snd;
  LowStar_Vector_vector_str__LowStar_Vector_vector_str__uint8_t_ hs = scrut5.thd;
  K___bool_uint32_t_bool scrut6 = deserialize_bool(ok5, input, sz, pos5);
  bool ok6 = scrut6.fst;
  uint32_t pos6 = scrut6.snd;
  bool rhs_ok = scrut6.thd;
  K___bool_uint32_t_LowStar_Vector_vector_str__uint8_t_
  scrut7 = deserialize_hash_vec(ok6, input, sz, pos6);
  bool ok7 = scrut7.fst;
  uint32_t pos7 = scrut7.snd;
  LowStar_Vector_vector_str__uint8_t_ rhs = scrut7.thd;
  K___bool_uint32_t_uint8_t_ scrut = deserialize_hash(ok7, input, sz, pos7);
  bool ok8 = scrut.fst;
  uint8_t *mroot = scrut.thd;
  if
  (
    !ok8
    || hash_size1 != hash_size
    ||
      !(j
      >= i1
      && uint64_max - offset1 >= (uint64_t)j
      && hs.sz == (uint32_t)32U
      && rhs.sz == (uint32_t)32U)
  )
  {
    return NULL;
  }
  else
  {
    KRML_CHECK_SIZE(sizeof (merkle_tree), (uint32_t)1U);
    merkle_tree *buf = KRML_HOST_MALLOC(sizeof (merkle_tree));
    buf[0U]
    =
      (
        (merkle_tree){
          .offset = offset1,
          .i = i1,
          .j = j,
          .hs = hs,
          .rhs_ok = rhs_ok,
          .rhs = rhs,
          .mroot = mroot
        }
      );
    return buf;
  }
}
